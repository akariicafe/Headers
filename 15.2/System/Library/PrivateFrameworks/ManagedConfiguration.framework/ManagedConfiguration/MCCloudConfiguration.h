@class NSDictionary;

@interface MCCloudConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSDictionary *setAsideDetails;

+ (id)sharedConfiguration;

- (BOOL)isSupervised;
- (id)MAIDUsername;
- (BOOL)isAwaitingConfiguration;
- (BOOL)isTeslaEnrolled;
- (id)tvProviderUserToken;
- (void)refreshDetailsFromDisk;
- (BOOL)isProvisionallyEnrolled;
- (id)skipSetupKeys;
- (id)diagnosticsUploadURL;
- (id)languageScript;
- (BOOL)hasMAIDCredential;
- (id)mdmVersionProtocol;
- (int)userMode;
- (id)provisionalEnrollmentExpirationDate;
- (int)_MDMUserModeToMCUserMode:(int)a0;
- (BOOL)alreadySignedIntoFaceTime;
- (id)language;
- (id)region;

@end
