@class NSString, NSArray, NSPredicate, NSManagedObjectContext, NSMutableDictionary, NSMutableArray, NSMutableOrderedSet, NSFetchRequest;
@protocol NSFetchedResultsControllerDelegate;

@interface NSFetchedResultsController : NSObject {
    NSString *_sectionNameKey;
    NSPredicate *_remappedPredicate;
    NSPredicate *_originalPredicate;
    id _cachePath;
    struct _fetchResultsControllerFlags { unsigned char _changedResultsSinceLastSave : 1; unsigned char _hasBatchedArrayResults : 1; unsigned char _hasMutableFetchedResults : 1; unsigned char _hasSections : 1; unsigned char _sectionKeyPathIsObject : 1; unsigned char _includesSubentities : 1; unsigned char _sendDidChangeContentDiffNotifications : 1; unsigned char _sendDidChangeContentNotifications : 1; unsigned char _sendDidChangeContentSnapshotNotifications : 1; unsigned char _sendObjectChangeNotifications : 1; unsigned char _sendSectionChangeNotifications : 1; unsigned char _sendSectionIndexTitleForSectionName : 1; unsigned char _sendWillChangeContentNotifications : 1; unsigned char _usesNonpersistedProperties : 1; unsigned int _reservedFlags : 18; } _flags;
    id _delegate;
    id _sortKeys;
    id _fetchedObjects;
    NSMutableOrderedSet *_sections;
    NSMutableDictionary *_sectionsByName;
    id _sectionIndexTitles;
    id _sectionIndexTitlesSections;
    NSMutableDictionary *_indexCache;
    NSMutableArray *_indexCacheOffsets;
}

@property (readonly, nonatomic) NSFetchRequest *fetchRequest;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSString *sectionNameKeyPath;
@property (readonly, nonatomic) NSString *cacheName;
@property (nonatomic) id<NSFetchedResultsControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *fetchedObjects;
@property (readonly, nonatomic) NSArray *sectionIndexTitles;
@property (readonly, nonatomic) NSArray *sections;

+ (void)initialize;
+ (void)deleteCacheWithName:(id)a0;

- (void)dealloc;
- (void)_managedObjectContextDidSave:(id)a0;
- (id)objectAtIndexPath:(id)a0;
- (id)initWithFetchRequest:(id)a0 managedObjectContext:(id)a1 sectionNameKeyPath:(id)a2 cacheName:(id)a3;
- (BOOL)performFetch:(id *)a0;
- (id)_fetchedObjects;
- (void)_managedObjectContextDidChange:(id)a0;
- (void)_managedObjectContextDidChangeObjectIDs:(id)a0;
- (void)_managedObjectContextDidMutateObjectIDs:(id)a0;
- (id)indexPathForObject:(id)a0;
- (long long)sectionForSectionIndexTitle:(id)a0 atIndex:(long long)a1;
- (id)sectionIndexTitleForSectionName:(id)a0;

@end
