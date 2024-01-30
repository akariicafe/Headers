@class NSDictionary, NSMutableArray;

@interface ConsistencyProofResponse : GPBMessage

@property (readonly) NSDictionary *metadata;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *responsesArray;
@property (readonly, nonatomic) unsigned long long responsesArray_Count;
@property (nonatomic) int logType;
@property (nonatomic) int application;

+ (id)descriptor;

- (void)setMetadata:(id)a0;
- (void)setMetadataValue:(id)a0 key:(id)a1;

@end
