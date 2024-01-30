@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NRMockXPCStuff : NSObject {
    NSMutableDictionary *_mockListeners;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
