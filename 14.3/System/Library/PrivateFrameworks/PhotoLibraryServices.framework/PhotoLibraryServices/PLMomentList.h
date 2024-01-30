@class NSSet, NSString, NSArray, NSDate, NSObject;
@protocol NSCopying;

@interface PLMomentList : PLManagedObject <PLAssetContainerList, PLMomentListData>

@property (nonatomic) short granularityLevel;
@property (nonatomic) int sortIndex;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *representativeDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSSet *momentsForMegaMoment;
@property (retain, nonatomic) NSSet *momentsForYear;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSArray *localizedLocationNames;
@property (readonly, nonatomic) NSSet *moments;
@property (readonly, nonatomic) NSArray *sortedMoments;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property (readonly, retain, nonatomic) NSArray *batchedMoments;
@property (readonly, retain, nonatomic) NSString *momentListDebugDescription;
@property (readonly, retain, nonatomic) NSString *title;

+ (id)descriptionForGranularityLevel:(short)a0;
+ (id)entityName;
+ (id)allMomentListsInManagedObjectContext:(id)a0 forLevel:(short)a1 error:(id *)a2;
+ (id)_findMomentListForGranularity:(short)a0 sortIndex:(int)a1 inManagedObjectContext:(id)a2;
+ (id)allMomentListsInManagedObjectContext:(id)a0 forLevel:(short)a1 error:(id *)a2 returnsObjectsAsFaults:(BOOL)a3;
+ (id)yearMomentListForYear:(long long)a0 inManagedObjectContext:(id)a1;
+ (id)allMomentListsInLibrary:(id)a0 forLevel:(short)a1;
+ (id)allMomentListsInLibrary:(id)a0 forLevel:(short)a1 returnsObjectsAsFaults:(BOOL)a2;
+ (id)monthMomentListForMonth:(long long)a0 year:(long long)a1 inManagedObjectContext:(id)a2;

- (void)delete;
- (void)awakeFromInsert;
- (BOOL)supportsDiagnosticInformation;
- (id)containers;
- (BOOL)isEmpty;
- (void)dealloc;
- (void)_updateStartAndEndDate;
- (void)didTurnIntoFault;
- (void)addMoments:(id)a0;
- (void)removeMomentForMegaMoment:(id)a0;
- (void)_performMomentChangesForKey:(id)a0 mutation:(unsigned long long)a1 primitiveMoments:(id)a2 changedMoments:(id)a3;
- (void)removeMoments:(id)a0;
- (id)_batchedMomentsPredicate;
- (void)_performMutation:(unsigned long long)a0 withMoments:(id)a1 forMomentListLevel:(short)a2;
- (id)diagnosticInformation;
- (BOOL)canEditContainers;
- (void)_performMomentChangesForKey:(id)a0 mutation:(unsigned long long)a1 primitiveMoments:(id)a2 changedMoment:(id)a3;
- (id)_typeDescription;
- (id)pl_debugDescription;
- (void)insertMomentForYear:(id)a0;
- (void)insertMomentForMegaMoment:(id)a0;
- (id)containersRelationshipName;
- (void)removeMomentForYear:(id)a0;

@end
