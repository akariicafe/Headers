@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CKDClientInfo : NSObject {
    NSString *_cachedHostname;
    NSObject<OS_dispatch_queue> *_hostCallbackQueue;
    struct MGNotificationTokenStruct { } *_hostNotificationToken;
}

@property (readonly, nonatomic) NSString *hostname;

+ (id)sharedClientInfo;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_init;
- (void)_refreshHostname;

@end
