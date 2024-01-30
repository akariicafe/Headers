@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MDMCloudConfiguration : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSDictionary *memberQueueDetails;
@property (retain, nonatomic) NSDictionary *memberQueueSetAsideDetails;
@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSDictionary *setAsideDetails;

+ (id)sharedConfiguration;
+ (id)canonicalConfigurationWithSupervision:(BOOL)a0;

- (id)provisionalEnrollmentExpirationDate;
- (BOOL)isProvisionallyEnrolled;
- (id)tvProviderUserToken;
- (BOOL)isSupervised;
- (id)region;
- (int)userMode;
- (id)MAIDUsername;
- (void)refreshDetailsFromDisk;
- (BOOL)isAwaitingConfiguration;
- (id)enrollmentAnchorCertificates;
- (id)diagnosticsUploadURL;
- (id)languageScript;
- (BOOL)alreadySignedIntoFaceTime;
- (id)enrollmentServerSupportedFeatures;
- (BOOL)isMDMUnremovable;
- (BOOL)isTeslaEnrolled;
- (id)enrollmentServerInfo;
- (id)mdmVersionProtocol;
- (id)init;
- (id)skipSetupKeys;
- (id)enrollmentServerURL;
- (BOOL)hasMAIDCredential;
- (void).cxx_destruct;
- (id)language;

@end
