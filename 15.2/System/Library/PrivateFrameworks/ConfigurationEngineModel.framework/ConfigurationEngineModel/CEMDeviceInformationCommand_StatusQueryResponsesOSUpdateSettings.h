@class NSSet, NSString, NSDate, NSNumber;

@interface CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusCatalogURL;
@property (copy, nonatomic) NSNumber *statusIsDefaultCatalog;
@property (copy, nonatomic) NSDate *statusPreviousScanDate;
@property (copy, nonatomic) NSString *statusPreviousScanResult;
@property (copy, nonatomic) NSNumber *statusPerformPeriodicCheck;
@property (copy, nonatomic) NSNumber *statusAutomaticCheckEnabled;
@property (copy, nonatomic) NSNumber *statusBackgroundDownloadEnabled;
@property (copy, nonatomic) NSNumber *statusAutomaticAppInstallationEnabled;
@property (copy, nonatomic) NSNumber *statusAutomaticOSInstallationEnabled;
@property (copy, nonatomic) NSNumber *statusAutomaticSecurityUpdatesEnabled;

+ (id)buildRequiredOnly;
+ (id)buildWithCatalogURL:(id)a0 withIsDefaultCatalog:(id)a1 withPreviousScanDate:(id)a2 withPreviousScanResult:(id)a3 withPerformPeriodicCheck:(id)a4 withAutomaticCheckEnabled:(id)a5 withBackgroundDownloadEnabled:(id)a6 withAutomaticAppInstallationEnabled:(id)a7 withAutomaticOSInstallationEnabled:(id)a8 withAutomaticSecurityUpdatesEnabled:(id)a9;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
