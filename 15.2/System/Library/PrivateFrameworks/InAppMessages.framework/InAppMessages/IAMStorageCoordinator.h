@class IAMICStorageProvider, NSString, NSSet;
@protocol IAMStorageCoordinatorDelegate, IAMPropertyStorage, IAMMessageMetadataStorage, IAMMessageEntryProvider;

@interface IAMStorageCoordinator : NSObject <IAMMessageEntryProviderDelegate> {
    id<IAMMessageEntryProvider> _messageEntryProvider;
    id<IAMMessageMetadataStorage> _messageMetadataStorage;
    id<IAMPropertyStorage> _propertyStorage;
    NSSet *_messageBundleIdentifiers;
}

@property (readonly, nonatomic) IAMICStorageProvider *iTunesCloudStorageProvider;
@property (weak, nonatomic) id<IAMStorageCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_propertyNameForGlobalPresentationPolicyGroupLastDisplayTime:(int)a0;

- (void)_fetchMessagesMetadata:(id /* block */)a0;
- (void)_fetchLastDisplayTimeForGlobalPresentationPolicyGroup:(int)a0 completion:(id /* block */)a1;
- (void)updateLastDisplayTimeGlobalPresentationPolicyGroupNormal:(id)a0;
- (void)updateMetadata:(id)a0 forMessageEntry:(id)a1 completion:(id /* block */)a2;
- (void)reportEventForMessageIdentifier:(id)a0 withParams:(id)a1 completion:(id /* block */)a2;
- (void)messageEntriesDidChange:(id)a0;
- (void)removeApplicationBadgeFromMessageEntry:(id)a0 completion:(id /* block */)a1;
- (void)updateLastDisplayTimeGlobalPresentationPolicyGroupRestricted:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageEntryProvider:(id)a0 messageMetadataStorage:(id)a1 propertyStorage:(id)a2 messageBundleIdentifiers:(id)a3;
- (void)fetchGlobalPresentationPolicyGroupDisplayTimes:(id /* block */)a0;
- (void)_fetchMessageEntries:(id /* block */)a0;
- (void)_updateLastDisplayTime:(id)a0 forGlobalPresentationPolicyGroup:(int)a1;
- (void)fetchMessagesEntriesAndMetadata:(id /* block */)a0;
- (void)downloadResourcesForMessageEntry:(id)a0 completion:(id /* block */)a1;
- (void)removeMessageEntry:(id)a0 completion:(id /* block */)a1;

@end
