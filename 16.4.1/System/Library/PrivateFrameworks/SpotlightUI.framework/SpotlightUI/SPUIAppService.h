@class SPXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SPUIAppService : NSObject {
    int _awakeNotifyToken;
    NSObject<OS_dispatch_queue> *_appServiceQueue;
    SPXPCConnection *_backgroundConnection;
    SPXPCConnection *_appConnection;
    BOOL _activated;
}

+ (void)initialize;
+ (id)sharedAppService;

- (void)deactivate;
- (id)init;
- (void)registerAwakeNotifyToken;
- (void)activate;
- (void)_cancelAwakeNotifyToken;
- (void).cxx_destruct;

@end
