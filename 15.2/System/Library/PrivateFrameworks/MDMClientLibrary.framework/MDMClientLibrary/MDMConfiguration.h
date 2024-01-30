@class NSString, NSArray, NSDictionary, NSURL, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface MDMConfiguration : NSObject

@property (nonatomic) BOOL isUserEnrollment;
@property (retain, nonatomic) NSString *enrollmentID;
@property (retain, nonatomic) NSString *personaID;
@property (retain, nonatomic) NSString *easEnrollmentID;
@property (retain, nonatomic) NSString *rmAccountID;
@property (retain, nonatomic) NSString *enrollmentMode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSString *memberQueueManagingProfileIdentifier;
@property (nonatomic) struct __SecIdentity { } *memberQueueIdentity;
@property (retain, nonatomic) NSArray *memberQueueCheckInPinnedSecCertificateRefs;
@property (nonatomic) BOOL memberQueuePinningRevocationCheckRequired;
@property (nonatomic) BOOL memberQueueSignMessage;
@property (retain, nonatomic) NSString *memberQueueTopic;
@property (retain, nonatomic) NSDictionary *memberQueueOrganizationInfo;
@property (retain, nonatomic) NSNumber *memberQueuePollingInterval;
@property (retain, nonatomic) NSURL *memberQueueServerURL;
@property (retain, nonatomic) NSURL *memberQueueCheckInURL;
@property (retain, nonatomic) NSDictionary *memberQueueMDMOptions;
@property (nonatomic) int memberQueueAccessRights;
@property (nonatomic) BOOL memberQueueUseDevelopmentAPNS;
@property (retain, nonatomic) NSString *memberQueuePushMagic;

+ (id)sharedConfiguration;

- (void)refreshDetailsFromDisk;
- (void)memberQueueForgetCurrentConfiguration;
- (void).cxx_destruct;
- (id)init;
- (BOOL)readConfigurationOutError:(id *)a0;

@end
