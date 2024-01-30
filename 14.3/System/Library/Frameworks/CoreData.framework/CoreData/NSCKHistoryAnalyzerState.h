@class NSString, NSDictionary, NSNumber, NSManagedObjectID;

@interface NSCKHistoryAnalyzerState : NSManagedObject <PFHistoryAnalyzerObjectState>

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSNumber *entityId;
@property (retain, nonatomic) NSNumber *entityPK;
@property (retain, nonatomic) NSNumber *originalChangeTypeNum;
@property (retain, nonatomic) NSNumber *finalChangeTypeNum;
@property (readonly, nonatomic) NSManagedObjectID *analyzedObjectID;
@property (readonly, nonatomic) NSNumber *originalTransactionNumber;
@property (readonly, nonatomic) long long originalChangeType;
@property (readonly, nonatomic) NSNumber *finalTransactionNumber;
@property (readonly, nonatomic) long long finalChangeType;
@property (readonly, nonatomic) NSDictionary *tombstone;
@property (readonly, nonatomic) NSString *finalChangeAuthor;

+ (id)countAnalyzerStatesInStore:(id)a0 matchingPredicate:(id)a1 withManagedObjectContext:(id)a2 error:(id *)a3;
+ (id)insertAnalyzerStateForChange:(id)a0 inStore:(id)a1 withManagedObjectContext:(id)a2 error:(id *)a3;
+ (id)fetchStateForChangedObjectID:(id)a0 withManagedObjectContext:(id)a1 error:(id *)a2;
+ (BOOL)purgeAnalyzedHistoryFromStore:(id)a0 withManagedObjectContext:(id)a1 error:(id *)a2;
+ (id)countAnalyzerStatesInStore:(id)a0 withManagedObjectContext:(id)a1 error:(id *)a2;

- (void)updateWithChange:(id)a0;
- (id)tombstone;

@end
