@class CKShare;

@interface HMBCloudZoneShareModel : HMBModel

@property (retain, nonatomic) CKShare *share;

+ (id)hmbProperties;
+ (id)hmbExternalRecordType;

@end
