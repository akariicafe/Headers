@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MCCloudConfiguration : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSDictionary *memberQueueDetails;
@property (retain, nonatomic) NSDictionary *memberQueueSetAsideDetails;
@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSDictionary *setAsideDetails;

+ (id)sharedConfiguration;

- (BOOL)isSupervised;
- (id)language;
- (id)tvProviderUserToken;
- (int)userMode;
- (BOOL)isProvisionallyEnrolled;
- (id)skipSetupKeys;
- (id)provisionalEnrollmentExpirationDate;
- (id)diagnosticsUploadURL;
- (id)MAIDUsername;
- (id)region;
- (id)init;
- (void).cxx_destruct;
- (void)refreshDetailsFromDisk;
- (id)languageScript;
- (BOOL)hasMAIDCredential;
- (BOOL)isAwaitingConfiguration;
- (BOOL)alreadySignedIntoFaceTime;
- (BOOL)isTeslaEnrolled;
- (id)mdmVersionProtocol;

@end
