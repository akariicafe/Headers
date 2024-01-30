@class NSMutableArray;
@protocol _UIUpdateHIDAbstractInput;

@interface _UIEventBus : NSObject {
    NSMutableArray *_events;
    id<_UIUpdateHIDAbstractInput> _inputs[3];
}

- (void).cxx_destruct;
- (id)init;

@end
