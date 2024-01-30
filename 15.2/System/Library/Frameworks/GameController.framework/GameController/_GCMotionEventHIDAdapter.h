@class NSArray, NSString;
@protocol _GCHIDEventSource;

@interface _GCMotionEventHIDAdapter : NSObject <_GCMotionEventSource>

@property (retain, nonatomic) id<_GCHIDEventSource> HIDEventSource;
@property (retain, nonatomic) id HIDEventObservation;
@property (copy) NSArray *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)observeMotionEvents:(id /* block */)a0;
- (id)initWithSource:(id)a0 service:(id)a1;

@end
