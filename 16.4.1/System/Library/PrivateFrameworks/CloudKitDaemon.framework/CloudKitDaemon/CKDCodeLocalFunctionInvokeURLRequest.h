@class NSString, NSData, NSURL;

@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSData *serializedParameters;
@property (copy, nonatomic) NSURL *resolvedBaseURL;
@property (copy, nonatomic) id /* block */ serializedResultsCallback;

- (id)requestDidParseProtobufObject:(id)a0;
- (id)additionalHeaderValues;
- (long long)partitionType;
- (BOOL)requestGETPreAuth;
- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (long long)databaseScope;
- (id)url;
- (BOOL)parsingStandaloneMessage;
- (void).cxx_destruct;
- (Class)expectedResponseClass;
- (id)initWithOperation:(id)a0 serviceName:(id)a1 functionName:(id)a2 serializedParameters:(id)a3 resolvedBaseURL:(id)a4;
- (void)prepareRequestOperationsForRequest:(id)a0;
- (id)requestBodyStream;
- (Class)requestMessageClass;
- (long long)serverType;
- (BOOL)shouldCompressBody;

@end
