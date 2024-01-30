@class NSString, NSCountedSet;

@interface HMDCoreDataCloudStoreTransactionLogEvent : HMMLogEvent

@property (readonly, nonatomic) NSString *transactionAuthor;
@property (readonly, nonatomic) NSCountedSet *reasons;

+ (void)countMKFCKEntitiesInChangeSet:(id)a0 entitiesCount:(id)a1;
+ (id)eventForUpdates:(id)a0 inserts:(id)a1 deletes:(id)a2 transactionAuthor:(id)a3;
+ (void)trimChangeSetForUnchangedValues:(id)a0;

- (void).cxx_destruct;
- (id)initWithChangeSet:(id)a0 transactionAuthor:(id)a1;

@end
