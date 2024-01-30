@class NSString, NSData, NSArray;

@interface CKDCodeFunctionInvokeURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSData *serializedParameters;
@property (retain, nonatomic) NSData *attestationEntropy;
@property (copy, nonatomic) NSArray *pccWrappedInvocationKeys;
@property (copy, nonatomic) id /* block */ serializedResultsCallback;

- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;
- (long long)databaseScope;
- (BOOL)requestGETPreAuth;
- (id)initWithOperation:(id)a0 serviceName:(id)a1 functionName:(id)a2 serializedParameters:(id)a3 attestationEntropy:(id)a4 pccWrappedInvocationKeys:(id)a5;

@end
