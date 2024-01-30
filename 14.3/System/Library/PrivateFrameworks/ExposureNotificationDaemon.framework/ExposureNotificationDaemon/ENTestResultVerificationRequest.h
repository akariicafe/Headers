@class NSString, NSSet, NSDictionary;

@interface ENTestResultVerificationRequest : ENTestResultNetworkRequest

@property (readonly, copy, nonatomic) NSString *verificationCode;
@property (readonly, copy, nonatomic) NSSet *acceptedTestTypes;
@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, copy, nonatomic) NSDictionary *metadata;

+ (id)_metadataFromVerificationResponseDictionary:(id)a0 error:(id *)a1;
+ (id)verificationRequestWithCode:(id)a0 acceptedReportTypes:(id)a1 APIKey:(id)a2 requestURL:(id)a3 URLSession:(id)a4 queue:(id)a5 error:(id *)a6;

- (void).cxx_destruct;
- (id)_testVerificationErrorForErrorCodeString:(id)a0;
- (id)errorForUnsuccessfulResponse:(id)a0 body:(id)a1;
- (id)bodyJSON;
- (id)handleResponse:(id)a0 body:(id)a1;

@end
