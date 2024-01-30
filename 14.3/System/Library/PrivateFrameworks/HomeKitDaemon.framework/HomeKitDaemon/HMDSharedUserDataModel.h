@class NSUUID;

@interface HMDSharedUserDataModel : HMDUserDataModel

@property (retain) NSUUID *assistantAccessControlModelUUID;
@property (retain) NSUUID *mediaContentProfileAccessControlModelUUID;

+ (id)hmbProperties;

@end
