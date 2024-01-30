@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CACUtilityToolServer : NSObject {
    NSObject<OS_dispatch_queue> *_toolServerDispatchQueue;
    NSObject<OS_xpc_object> *_feedbackListener;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
