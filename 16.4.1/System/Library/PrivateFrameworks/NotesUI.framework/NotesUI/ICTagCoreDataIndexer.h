@class NSArray, NSFetchedResultsController, NSObject;
@protocol OS_dispatch_queue, ICSectionIdentifier;

@interface ICTagCoreDataIndexer : ICCoreDataIndexer

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (retain, nonatomic) NSArray *hashtags;
@property (retain, nonatomic) NSArray *objectIDs;
@property (retain, nonatomic) NSArray *leadingVisibleObjectIDs;
@property (retain, nonatomic) id<ICSectionIdentifier> sectionIdentifier;
@property (nonatomic) BOOL includesAllTagsItem;
@property (nonatomic) BOOL includesNewTagItem;
@property (nonatomic) unsigned long long visibleTagLimit;
@property (readonly, nonatomic) unsigned long long hiddenTagCount;

+ (BOOL)isTagItemIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)activeFetchedResultsControllers;
- (id)indexObjectsInSection:(id)a0 sectionIndex:(unsigned long long)a1 fetchedResultsController:(id)a2;
- (id)initWithModernManagedObjectContext:(id)a0 sectionIdentifier:(id)a1;
- (id)newSnapshotFromIndexWithLegacyManagedObjectContext:(id)a0 modernManagedObjectContext:(id)a1;
- (id)nextRelevantItemIdentifierAfter:(id)a0;
- (id)sectionIdentifierForHeaderInSection:(long long)a0;
- (id)sectionIdentifiersForSectionControllerType:(unsigned long long)a0;
- (id)sectionSnapshotsForSectionControllerType:(unsigned long long)a0 legacyManagedObjectContext:(id)a1 modernManagedObjectContext:(id)a2;
- (void)willIndex;

@end
