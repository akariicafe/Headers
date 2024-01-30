@class HDCloudSyncZoneIdentifier;

@interface HDInsertSharedSummaryTransactionOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) HDCloudSyncZoneIdentifier *zoneIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithZoneIdentifier:(id)a0;
- (id)transactionContext;

@end
