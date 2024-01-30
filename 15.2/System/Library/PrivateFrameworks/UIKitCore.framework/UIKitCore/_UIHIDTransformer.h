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

- (id)drainOutputHIDEvents;
- (void).cxx_destruct;
- (id)handleHIDEvent:(struct __IOHIDEvent { } *)a0;
- (id)initWithRunLoop:(struct __CFRunLoop { } *)a0;
- (void)addOutputHIDEvent:(id)a0;
- (id)_inputEventsForHIDEvent:(struct __IOHIDEvent { } *)a0 contextId:(unsigned int)a1;

@end
