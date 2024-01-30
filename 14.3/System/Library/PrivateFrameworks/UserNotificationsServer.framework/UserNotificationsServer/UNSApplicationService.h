@class NSObject, UNSNotificationCategoryRepository, NSMutableSet, UNSLocalizationService, UNSApplicationLauncher;
@protocol OS_dispatch_queue;

@interface UNSApplicationService : NSObject {
    NSMutableSet *_foregroundBundleIdentifiers;
    UNSApplicationLauncher *_applicationLauncher;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSLocalizationService *_localizationService;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)willPresentNotification:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_queue_willPresentNotification:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)isApplicationForeground:(id)a0;
- (void)_queue_didChangeApplicationState:(unsigned int)a0 forBundleIdentifier:(id)a1;
- (void)didChangeApplicationState:(unsigned int)a0 forBundleIdentifier:(id)a1;
- (id)initWithApplicationLauncher:(id)a0 categoryRepository:(id)a1 localizationService:(id)a2;

@end
