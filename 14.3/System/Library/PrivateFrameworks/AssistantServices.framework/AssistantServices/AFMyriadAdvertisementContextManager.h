@class AFSettingsConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AFMyriadAdvertisementContextManager : NSObject {
    AFSettingsConnection *_settingsConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)pushMyriadAdvertisementContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)_resetSettingsConnection;
- (id)_settingsConnection;

@end
