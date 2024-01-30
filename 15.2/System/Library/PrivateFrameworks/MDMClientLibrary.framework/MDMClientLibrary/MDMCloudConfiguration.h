@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MDMCloudConfiguration : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSDictionary *memberQueueDetails;
@property (retain, nonatomic) NSDictionary *memberQueueSetAsideDetails;
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
- (id)enrollmentServerURL;
- (id)enrollmentServerInfo;
- (id)enrollmentAnchorCertificates;
- (void).cxx_destruct;
- (id)init;
- (id)enrollmentServerSupportedFeatures;
- (BOOL)isMDMUnremovable;
- (BOOL)alreadySignedIntoFaceTime;
- (id)language;
- (id)region;

@end
