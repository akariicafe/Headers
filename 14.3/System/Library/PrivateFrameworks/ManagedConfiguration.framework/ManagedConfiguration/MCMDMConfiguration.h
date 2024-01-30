@class NSString, NSDictionary, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface MCMDMConfiguration : NSObject

@property (nonatomic) BOOL isUserEnrollment;
@property (retain, nonatomic) NSString *personaID;
@property (retain, nonatomic) NSString *easEnrollmentID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSString *memberQueueManagingProfileIdentifier;
@property (nonatomic) struct __SecIdentity { } *memberQueueIdentity;
@property (retain, nonatomic) NSString *memberQueueTopic;
@property (retain, nonatomic) NSURL *memberQueueServerURL;
@property (retain, nonatomic) NSURL *memberQueueCheckInURL;
@property (retain, nonatomic) NSDictionary *memberQueueOrganizationInfo;
@property (retain, nonatomic) NSDictionary *memberQueueMDMOptions;
@property (nonatomic) int memberQueueAccessRights;
@property (nonatomic) BOOL memberQueueUseDevelopmentAPNS;
@property (retain, nonatomic) NSString *memberQueuePushMagic;
@property (nonatomic) BOOL memberQueueSignMessage;

+ (id)sharedConfiguration;

- (id)init;
- (void).cxx_destruct;
- (void)refreshDetailsFromDisk;
- (void)memberQueueForgetCurrentConfiguration;
- (BOOL)readConfigurationOutError:(id *)a0;

@end
