@class NSNumber, NSData;

@interface HMDCloudLegacyModelObject : HMDBackingStoreModelObject

@property (retain, nonatomic) NSNumber *legacyRecordType;
@property (retain, nonatomic) NSData *data1;
@property (retain, nonatomic) NSData *data2;

+ (id)properties;

@end
