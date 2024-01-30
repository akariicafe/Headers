@class NSUUID;

@interface HMDUserDataModel : HMBModel

@property (retain) NSUUID *settingsRootUUID;

+ (id)hmbProperties;

@end
