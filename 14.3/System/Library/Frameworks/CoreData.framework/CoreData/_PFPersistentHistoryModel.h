@class NSString;

@interface _PFPersistentHistoryModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (unsigned long long)_maxCountOfTombstonesInModel:(id)a0;
+ (unsigned long long)ancillaryEntityCount;
+ (id)newPersistentHistoryManagedObjectModelForSQLModel:(id)a0 options:(id)a1;
+ (BOOL)_hasTombstonesInUserInfo:(id)a0;
+ (id)_tombstonesColumnsForEntity:(id)a0;
+ (id)_tombstonesForEntity:(id)a0;
+ (id)newPersistentHistorySQLModelForSQLModel:(id)a0 options:(id)a1;
+ (id)ancillaryModelNamespace;
+ (void)_invalidateStaticCaches;
+ (unsigned long long)ancillaryEntityOffset;
+ (void)resetCaches;


@end
