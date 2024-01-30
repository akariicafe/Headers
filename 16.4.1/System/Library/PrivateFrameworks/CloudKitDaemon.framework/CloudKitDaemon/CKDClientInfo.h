@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CKDClientInfo : NSObject {
    NSString *_cachedHostname;
    NSObject<OS_dispatch_queue> *_hostCallbackQueue;
    struct MGNotificationTokenStruct { } *_hostNotificationToken;
}

@property (readonly, nonatomic) NSString *hostname;

+ (id)sharedClientInfo;

- (void)_refreshHostname;
- (id)_init;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
