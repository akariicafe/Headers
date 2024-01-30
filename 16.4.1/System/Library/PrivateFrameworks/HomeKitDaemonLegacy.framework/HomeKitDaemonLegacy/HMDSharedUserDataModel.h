@class NSUUID;

@interface HMDSharedUserDataModel : HMDUserDataModel

@property (retain) NSUUID *assistantAccessControlModelUUID;
@property (retain) NSUUID *mediaContentProfileAccessControlModelUUID;
@property (retain) NSUUID *userListeningHistoryUpdateControlModelUUID;
@property (retain) NSUUID *supportsAutomaticHH2MigrationModelUUID;

+ (id)hmbProperties;

@end
