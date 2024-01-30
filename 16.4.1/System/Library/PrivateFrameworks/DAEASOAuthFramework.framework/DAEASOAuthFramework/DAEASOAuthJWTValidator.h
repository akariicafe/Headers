@class NSString, NSData;

@interface DAEASOAuthJWTValidator : NSObject

@property (retain, nonatomic) NSString *rawHeader;
@property (retain, nonatomic) NSString *rawPayload;
@property (retain, nonatomic) NSString *rawSignature;
@property (retain, nonatomic) NSData *decodedHeader;
@property (retain, nonatomic) NSData *decodedPayload;
@property (retain, nonatomic) NSData *decodedSignature;
@property (retain, nonatomic) id headerJSONObject;
@property (retain, nonatomic) id payloadJSONObject;

+ (id)base64URLDecode:(id)a0;
+ (id)base64URLEncode:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)personalAccount;
- (BOOL)_signatureValid:(id)a0;
- (BOOL)idTokenValidWithJWKS:(id)a0 withAudience:(id)a1 withIssuer:(id)a2;
- (id)initWithIdToken:(id)a0;

@end
