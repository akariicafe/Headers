@class NSArray, NSData, NSDictionary;

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *recordsToSave;
@property (retain, nonatomic) NSArray *recordIDsToDelete;
@property (retain, nonatomic) NSData *clientChangeTokenData;
@property (nonatomic) BOOL atomic;
@property (nonatomic) long long savePolicy;
@property (nonatomic) BOOL shouldOnlySaveAssetContent;
@property (copy, nonatomic) NSDictionary *recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID;
@property (copy, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (nonatomic) BOOL shouldReportRecordsInFlight;
@property (copy, nonatomic) NSDictionary *assetUUIDToExpectedProperties;
@property (copy, nonatomic) NSDictionary *packageUUIDToExpectedProperties;
@property (nonatomic) BOOL originatingFromDaemon;
@property (nonatomic) BOOL markAsParticipantNeedsNewInvitationToken;
@property (nonatomic) BOOL shouldSkipPCSRetryBehavior;
@property (nonatomic) BOOL shouldModifyRecordsInDatabase;
@property (nonatomic) BOOL alwaysFetchPCSFromServer;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;

- (void)encodeWithCoder:(id)a0;
- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
