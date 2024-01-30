@class NSData, NSMutableArray;

@interface MapLeaf_Device : GPBMessage

@property (copy, nonatomic) NSData *deviceIdVrfoutput;
@property (retain, nonatomic) NSMutableArray *clientDataArray;
@property (readonly, nonatomic) unsigned long long clientDataArray_Count;

+ (id)descriptor;

@end
