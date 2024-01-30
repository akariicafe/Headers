@class NSData, NSString, NSMutableArray;

@interface QueryRequest : GPBMessage

@property (nonatomic) int version;
@property (nonatomic) int application;
@property (copy, nonatomic) NSData *uriVrfOutput;
@property (copy, nonatomic) NSString *uri;
@property (retain, nonatomic) NSMutableArray *devicesArray;
@property (readonly, nonatomic) unsigned long long devicesArray_Count;
@property (copy, nonatomic) NSData *accountId;

+ (id)descriptor;

@end
