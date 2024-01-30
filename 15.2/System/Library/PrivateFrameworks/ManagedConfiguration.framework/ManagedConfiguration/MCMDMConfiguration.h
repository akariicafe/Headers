@class NSString, NSDictionary, NSURL;

@interface MCMDMConfiguration : NSObject

@property (readonly) NSString *memberQueueManagingProfileIdentifier;
@property (readonly) NSDictionary *memberQueueOrganizationInfo;
@property (readonly) NSURL *memberQueueServerURL;
@property (readonly) BOOL isUserEnrollment;
@property (readonly) NSString *personaID;
@property (readonly) NSString *easEnrollmentID;

+ (id)sharedConfiguration;

- (void)refreshDetailsFromDisk;

@end
