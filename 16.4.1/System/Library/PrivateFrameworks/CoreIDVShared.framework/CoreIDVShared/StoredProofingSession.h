@class NSString, NSSet, NSDate;

@interface StoredProofingSession : NSManagedObject

@property (nonatomic) BOOL canUploadOnExpensiveNetwork;
@property (nonatomic) long long cloudKitUploadsMaxRetryCount;
@property (nonatomic) long long connectToWifiReminderInDays;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSString *credentialIdentifier;
@property (nonatomic) BOOL didNotifyOnUploadsCompletion;
@property (nonatomic) BOOL didShowWifiReminderAlert;
@property (nonatomic) BOOL hasUserConsentToShareBiomeData;
@property (nonatomic, copy) NSString *idType;
@property (nonatomic) BOOL isAutoProvisioningRetryComplete;
@property (nonatomic, copy) NSString *lastExecutedActionIdentifier;
@property (nonatomic, copy) NSString *learnMoreURLString;
@property (nonatomic) long long manualCheckInterval;
@property (nonatomic, copy) NSString *pairingID;
@property (nonatomic, copy) NSString *partnerSchemeID;
@property (nonatomic) long long proofingActionStatus;
@property (nonatomic, copy) NSString *proofingSessionID;
@property (nonatomic, copy) NSString *provisioningCredentialID;
@property (nonatomic, copy) NSDate *provisioningFailureDate;
@property (nonatomic) long long provisioningRetryTimeout;
@property (nonatomic, copy) NSString *provisioningTargetInstanceID;
@property (nonatomic) BOOL shouldScheduleUploads;
@property (nonatomic) BOOL shouldShowNotificationOnWatch;
@property (nonatomic, copy) NSString *state;
@property (nonatomic) long long target;
@property (nonatomic) long long totalUploadAssetsFileSizeInBytes;
@property (nonatomic, copy) NSString *workflowID;
@property (nonatomic, retain) NSSet *uploadAssets;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
