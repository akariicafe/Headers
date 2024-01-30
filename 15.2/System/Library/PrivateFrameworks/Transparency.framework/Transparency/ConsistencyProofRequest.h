@class NSMutableArray;

@interface ConsistencyProofRequest : GPBMessage

@property (nonatomic) int version;
@property (retain, nonatomic) NSMutableArray *requestsArray;
@property (readonly, nonatomic) unsigned long long requestsArray_Count;
@property (nonatomic) int logType;
@property (nonatomic) int application;

+ (id)descriptor;

@end
