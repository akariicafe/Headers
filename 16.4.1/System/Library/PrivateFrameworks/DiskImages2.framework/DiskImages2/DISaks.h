@class DIURL, NSString;

@interface DISaks : NSObject

@property (readonly, nonatomic) DIURL *URL;
@property (readonly, nonatomic) NSString *appStr;

+ (BOOL)decryptKeyWithData:(id)a0 destKey:(char *)a1 destKeySize:(unsigned long long)a2 error:(id *)a3;
+ (id)hintFormat:(id)a0;
+ (id)newACEndpointWithEnvironment:(id)a0 error:(id *)a1;
+ (id)newAPIWithError:(id *)a0;
+ (id)newDawTokenWithError:(id *)a0;
+ (id)newEnvWithDictionary:(id)a0 error:(id *)a1;
+ (id)newSessionWithError:(id *)a0;
+ (id)newUrl:(id)a0 api:(id)a1;
+ (id)request:(id)a0 session:(id)a1 json:(id)a2 error:(id *)a3;
+ (id)requestSynchronousDataWithRequest:(id)a0 session:(id)a1;

- (void).cxx_destruct;

@end
