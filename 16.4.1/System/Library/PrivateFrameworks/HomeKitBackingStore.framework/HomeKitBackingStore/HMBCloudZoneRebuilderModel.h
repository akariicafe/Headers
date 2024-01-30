@class NSUUID, NSNumber;

@interface HMBCloudZoneRebuilderModel : HMBModel

@property (class, readonly, nonatomic) NSUUID *sentinelUUID;

@property (retain, nonatomic) NSUUID *uniqueToken;
@property (retain, nonatomic) NSNumber *hasCompleted;

+ (id)hmbProperties;

- (id)init;

@end
