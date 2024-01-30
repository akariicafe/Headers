@class NSString, NSData, NSURL;

@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSData *serializedParameters;
@property (copy, nonatomic) NSURL *resolvedBaseURL;
@property (copy, nonatomic) id /* block */ serializedResultsCallback;

- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)url;
- (id)additionalHeaderValues;
- (void)requestDidParseNodeFailure:(id)a0;
- (long long)databaseScope;
- (long long)partitionType;
- (id)requestBodyStream;
- (BOOL)requestGETPreAuth;
- (Class)expectedResponseClass;
- (BOOL)parsingStandaloneMessage;
- (long long)serverType;
- (BOOL)shouldCompressBody;
- (Class)requestMessageClass;
- (id)initWithOperation:(id)a0 serviceName:(id)a1 functionName:(id)a2 serializedParameters:(id)a3 resolvedBaseURL:(id)a4;

@end
