@class NSDictionary;

@interface MCCloudConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSDictionary *setAsideDetails;

+ (id)sharedConfiguration;

- (id)provisionalEnrollmentExpirationDate;
- (BOOL)isProvisionallyEnrolled;
- (id)tvProviderUserToken;
- (BOOL)isSupervised;
- (id)region;
- (id)MAIDUsername;
- (void)refreshDetailsFromDisk;
- (BOOL)isAwaitingConfiguration;
- (id)diagnosticsUploadURL;
- (id)languageScript;
- (BOOL)alreadySignedIntoFaceTime;
- (BOOL)isTeslaEnrolled;
- (id)mdmVersionProtocol;
- (id)skipSetupKeys;
- (BOOL)hasMAIDCredential;
- (id)language;

@end
