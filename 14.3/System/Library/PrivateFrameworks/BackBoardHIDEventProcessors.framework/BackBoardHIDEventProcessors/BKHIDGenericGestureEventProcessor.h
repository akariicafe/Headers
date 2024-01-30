@class NSString, NSMutableDictionary;

@interface BKHIDGenericGestureEventProcessor : NSObject <BKHIDEventProcessor>

@property (retain, nonatomic) NSMutableDictionary *pendingDestinationsPerSenderID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)processEvent:(inout struct __IOHIDEvent **)a0 sender:(id)a1 dispatcher:(id)a2;

@end
