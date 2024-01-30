@class AFSettingsConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AFMyriadAdvertisementContextManager : NSObject {
    AFSettingsConnection *_settingsConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)pushMyriadAdvertisementContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)_settingsConnection;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithQueue:(id)a0;
- (void)_resetSettingsConnection;
- (void)triggerABCForType:(id)a0 subType:(id)a1 context:(id)a2;

@end
