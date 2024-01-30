@class _UIHIDContext, NSMutableArray, NSMutableDictionary;

@interface _UIHIDTransformer : NSObject {
    _UIHIDContext *_hidContext;
    NSMutableArray *_hidEvents;
    NSMutableDictionary *_hidContextByContextId;
    struct __IOHIDEvent { } *_hidEvent;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _eventTransform;
}

@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) unsigned int contextId;

- (id)initWithRunLoop:(struct __CFRunLoop { } *)a0;
- (id)handleHIDEvent:(struct __IOHIDEvent { } *)a0;
- (id)_inputEventsForHIDEvent:(struct __IOHIDEvent { } *)a0 contextId:(unsigned int)a1;
- (id)drainOutputHIDEvents;
- (void)addOutputHIDEvent:(id)a0;
- (void).cxx_destruct;

@end
