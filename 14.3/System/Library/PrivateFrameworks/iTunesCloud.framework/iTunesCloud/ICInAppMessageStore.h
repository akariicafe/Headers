@class NSMutableDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ICInAppMessageStore : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_messageEntryCache;
    NSMutableDictionary *_globalPropertyCache;
    NSMutableDictionary *_applicationPropertyCache;
    NSMutableDictionary *_messageMetadataCache;
    NSMutableArray *_pendingEvents;
    NSString *_filePath;
}

- (void)_commit;
- (void)pendingMessageEventsWithCompletion:(id /* block */)a0;
- (void)getStorePropertyForKey:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (id)_defaultStoreFilePath;
- (void).cxx_destruct;
- (void)getMetadataForMessageIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)initWithFilePath:(id)a0;
- (void)removePendingMessageEventWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)updateStoreProperty:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)getMessageEntryWithIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)removeMessageEntryWithIdentifier:(id)a0 forBundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)updateMetadata:(id)a0 messageIdentifier:(id)a1 bundleIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)allStorePropertiesWithCompletion:(id /* block */)a0;
- (void)resetStoreWithCompletion:(id /* block */)a0;
- (void)_load;
- (void)removeMetadataForMessageIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)getAllMessageEntriesWithCompletion:(id /* block */)a0;
- (void)updateMessageEntry:(id)a0 completion:(id /* block */)a1;
- (void)getAllMetadataForBundleIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)removeAllMetadataForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getAllMessageEntriesForBundleIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)updateStoreProperty:(id)a0 forKey:(id)a1 bundleIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)getStorePropertyForKey:(id)a0 completion:(id /* block */)a1;
- (void)getAllMessageEntriesForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeMessageEntry:(id)a0 completion:(id /* block */)a1;
- (void)addMessageEntry:(id)a0 completion:(id /* block */)a1;
- (void)addPendingMessageEvent:(id)a0 completion:(id /* block */)a1;
- (void)allApplicationStorePropertiesWithCompletion:(id /* block */)a0;
- (void)removeAllMessageEntriesForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getAllMetadataForBundleIdentifier:(id)a0 completion:(id /* block */)a1;

@end
