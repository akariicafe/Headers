@class NSSet, NSArray, NSOrderedSet, NSString, WFWorkflowIcon, NSData, WFCoreDataWorkflowIcon;

@interface WFCoreDataCollection : NSManagedObject <WFRecordStorage>

@property (readonly, nonatomic, getter=isFolder) BOOL folder;
@property (retain, nonatomic) WFWorkflowIcon *workflowIcon;
@property (copy, nonatomic) NSArray *collectionOrdering;
@property (copy, nonatomic) NSArray *shortcutOrdering;
@property (copy, nonatomic) NSOrderedSet *deserializedLastRemoteShortcutOrdering;
@property (copy, nonatomic) NSOrderedSet *deserializedLastRemoteShortcutOrderingSubset;
@property (copy, nonatomic) NSOrderedSet *deserializedLastRemoteCollectionOrdering;
@property (copy, nonatomic) NSOrderedSet *deserializedLastRemoteCollectionOrderingSubset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *cloudKitFolderRecordMetadata;
@property (retain, nonatomic) NSData *cloudKitOrderingRecordMetadata;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *lastRemoteCollectionOrderingData;
@property (retain, nonatomic) NSData *lastRemoteCollectionOrderingSubsetData;
@property (retain, nonatomic) NSData *lastRemoteShortcutOrderingData;
@property (retain, nonatomic) NSData *lastRemoteShortcutOrderingSubsetData;
@property (nonatomic) long long lastSyncedEncryptedSchemaVersion;
@property (nonatomic) long long lastSyncedHash;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL tombstoned;
@property (nonatomic) long long wantedEncryptedSchemaVersion;
@property (retain, nonatomic) NSOrderedSet *collections;
@property (retain, nonatomic) WFCoreDataWorkflowIcon *icon;
@property (retain, nonatomic) NSSet *parents;
@property (retain, nonatomic) NSOrderedSet *shortcuts;

+ (id)fetchRequest;
+ (id)descriptorFetchRequest;
+ (id)recordPropertyMap;

- (id)descriptor;

@end
