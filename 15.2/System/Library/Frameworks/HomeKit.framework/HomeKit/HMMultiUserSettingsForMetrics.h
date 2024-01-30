@class NSNumber, NSString, NSArray;

@interface HMMultiUserSettingsForMetrics : NSObject <HMFLogging, HMFObject, HMMessageEncoding>

@property (copy) NSNumber *numSharedUsers;
@property (copy) NSNumber *numUsersWithSettings;
@property (copy) NSNumber *numUsersWithIdentifyVoiceOff;
@property (copy) NSNumber *numUsersWithPlayBackInfluencesForYouOff;
@property (copy) NSNumber *numUsersCloudShareTrustNotConfigured;
@property (copy) NSNumber *numUsersSharedBackingStoreNotStarted;
@property (copy) NSNumber *numUsersSharedBackingStoreRunning;
@property (copy) NSNumber *numUsersSharedBackingStoreNotRunningDueToError;
@property (copy) NSNumber *numUsersSharedBackingStoreNotRunningDueToStopped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;

@end
