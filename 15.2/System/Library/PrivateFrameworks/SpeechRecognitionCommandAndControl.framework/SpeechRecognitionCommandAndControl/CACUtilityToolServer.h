@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CACUtilityToolServer : NSObject {
    NSObject<OS_dispatch_queue> *_toolServerDispatchQueue;
    NSObject<OS_xpc_object> *_feedbackListener;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
