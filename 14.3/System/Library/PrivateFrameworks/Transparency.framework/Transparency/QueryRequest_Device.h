@class NSData, NSMutableArray;

@interface QueryRequest_Device : GPBMessage

@property (copy, nonatomic) NSData *deviceId;
@property (retain, nonatomic) NSMutableArray *clientDataArray;
@property (readonly, nonatomic) unsigned long long clientDataArray_Count;

+ (id)descriptor;

@end
