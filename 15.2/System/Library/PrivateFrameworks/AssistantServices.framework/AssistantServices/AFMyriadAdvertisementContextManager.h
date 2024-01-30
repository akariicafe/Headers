@class AFSettingsConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AFMyriadAdvertisementContextManager : NSObject {
    AFSettingsConnection *_settingsConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithQueue:(id)a0;
- (void)_resetSettingsConnection;
- (void)pushMyriadAdvertisementContext:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)triggerABCForType:(id)a0 subType:(id)a1 context:(id)a2;
- (id)_settingsConnection;
- (void)reset;

@end
