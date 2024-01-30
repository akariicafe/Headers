@class NSString, NSArray, NSDictionary, NSMutableArray;

@interface WFRemoteExecutionAskEachTimeRequest : WFRemoteExecutionRequest

@property (retain, nonatomic) NSMutableArray *parameterKeysAndStatesData;
@property (retain, nonatomic) NSMutableArray *possibleStatesByParameterKeyData;
@property (readonly, nonatomic) NSString *associatedRunRequestIdentifier;
@property (readonly, nonatomic) NSArray *parameterKeys;
@property (readonly, nonatomic) NSDictionary *parameterKeysAndStates;
@property (readonly, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) NSDictionary *actionSerializedParameters;
@property (readonly, nonatomic) NSDictionary *possibleStatesByParameterKey;

+ (long long)version;

- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)inflateParameterStatesWithAction:(id)a0;
- (id)initWithAction:(id)a0 parameters:(id)a1 associatedRunRequestIdentifier:(id)a2 possibleStatesByParameterKey:(id)a3;
- (BOOL)readMessageFromData:(id)a0 error:(id *)a1;
- (id)writeMessageToWriter:(id)a0 error:(id *)a1;

@end
