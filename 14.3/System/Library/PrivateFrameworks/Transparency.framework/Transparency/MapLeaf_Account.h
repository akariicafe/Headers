@class NSData, NSMutableArray;

@interface MapLeaf_Account : GPBMessage

@property (copy, nonatomic) NSData *accountId;
@property (retain, nonatomic) NSMutableArray *devicesArray;
@property (readonly, nonatomic) unsigned long long devicesArray_Count;

+ (id)descriptor;

@end
