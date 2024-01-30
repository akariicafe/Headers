@class PLSearchTrackedAttributes;

@interface PLSearchTrackedChangeTypes : NSObject

@property (retain, nonatomic) PLSearchTrackedAttributes *searchTrackedAttributes;

+ (id)entityNamesIndexedBySearch;
+ (BOOL)isEntityIndexedBySearch:(id)a0;

- (void).cxx_destruct;
- (id)_changesTrackedBySearchForEntity:(id)a0;
- (BOOL)shouldUpdateSearchIndexForChange:(id)a0 entityName:(id)a1 photoLibrary:(id)a2;
- (id)trackedEntityNameForChange:(id)a0 photoLibrary:(id)a1;
- (id)uuidForPersistentHistoryDeletionChange:(id)a0 photoLibrary:(id)a1;

@end
