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

- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)deactivate;
- (void)registerAwakeNotifyToken;
- (void)_cancelAwakeNotifyToken;

@end
