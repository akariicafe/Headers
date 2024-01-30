@class NSString, ICInAppMessageManager;
@protocol IAMMessageEntryProviderDelegate;

@interface IAMICMessageEntryProvider : NSObject <IAMMessageEntryProvider> {
    ICInAppMessageManager *_iTunesCloudIAMManager;
}

@property (weak, nonatomic) id<IAMMessageEntryProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeMessageEntryWithIdentifier:(id)a0 forBundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)reportEventForMessageIdentifier:(id)a0 withParams:(id)a1 completion:(id /* block */)a2;
- (void)messageEntriesForBundleIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)removeApplicationBadgeForBundleIdentifier:(id)a0 fromPresentedMessageEntry:(id)a1 completion:(id /* block */)a2;
- (void)downloadResourcesForMessageWithIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)_handleMessagesDidChangeNotification;

@end
