@class NSString, NSURL, NSMutableOrderedSet, NSNumber, PLManagedFolder;

@interface PLPersistedFolderMetadata : NSObject

@property (retain, nonatomic) PLManagedFolder *folder;
@property (retain, nonatomic) NSURL *metadataURL;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *kind;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (nonatomic, getter=isPrototype) BOOL prototype;
@property (nonatomic, getter=isInTrash) BOOL inTrash;
@property (nonatomic) BOOL customSortAscending;
@property (nonatomic) int customSortKey;
@property (retain, nonatomic) NSMutableOrderedSet *childUUIDs;
@property (readonly, retain, nonatomic) NSString *remappedUUID;
@property (readonly, nonatomic) BOOL isRootFolder;
@property (readonly, nonatomic) BOOL isProjectAlbumRootFolder;

+ (BOOL)isValidPath:(id)a0;
+ (void)updateChildrenOrderingInFolder:(id)a0 usingChildUUIDs:(id)a1 sourceDescription:(id)a2 includePendingChanges:(BOOL)a3;

- (id)init;
- (void).cxx_destruct;
- (void)writePersistedData;
- (void)_saveMetadata;
- (BOOL)_readMetadata;
- (id)initWithPLManagedFolder:(id)a0 pathManager:(id)a1;
- (id)description;
- (void)removePersistedData;
- (void)updateChildrenOrderingInFolder:(id)a0 includePendingChanges:(BOOL)a1;
- (id)insertFolderFromDataInManagedObjectContext:(id)a0;
- (id)initWithPersistedDataAtURL:(id)a0;

@end
