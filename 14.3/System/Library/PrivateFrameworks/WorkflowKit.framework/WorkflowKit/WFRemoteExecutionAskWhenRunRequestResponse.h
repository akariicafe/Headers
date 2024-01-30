@class NSString, NSDictionary, NSError, NSMutableArray;

@interface WFRemoteExecutionAskWhenRunRequestResponse : WFRemoteExecutionRequest

@property (retain, nonatomic) NSMutableArray *inputtedStatesData;
@property (readonly, nonatomic) NSString *originatingRequestIdentifier;
@property (readonly, nonatomic) NSDictionary *inputtedStates;
@property (readonly, nonatomic) NSError *error;

+ (long long)version;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (BOOL)readMessageFromData:(id)a0 error:(id *)a1;
- (id)writeMessageToWriter:(id)a0 error:(id *)a1;
- (id)initWithOriginatingRequestIdentifier:(id)a0 inputtedStates:(id)a1 error:(id)a2;
- (void)inflateInputtedStatesWithAction:(id)a0;

@end
