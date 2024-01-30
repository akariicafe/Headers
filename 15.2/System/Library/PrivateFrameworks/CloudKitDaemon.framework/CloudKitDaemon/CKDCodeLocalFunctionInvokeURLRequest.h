@class NSString, NSData, NSURL;

@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSData *serializedParameters;
@property (copy, nonatomic) NSURL *resolvedBaseURL;
@property (copy, nonatomic) id /* block */ serializedResultsCallback;

- (void)requestDidParseNodeFailure:(id)a0;
- (id)additionalHeaderValues;
- (long long)databaseScope;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)url;
- (BOOL)parsingStandaloneMessage;
- (BOOL)requestGETPreAuth;
- (long long)partitionType;
- (void).cxx_destruct;
- (long long)serverType;
- (BOOL)allowsAnonymousAccount;
- (id)requestBodyStream;
- (Class)expectedResponseClass;
- (BOOL)shouldCompressBody;
- (Class)requestMessageClass;
- (id)initWithOperation:(id)a0 serviceName:(id)a1 functionName:(id)a2 serializedParameters:(id)a3 resolvedBaseURL:(id)a4;

@end
