@class NSData;

@interface RSABSSATokenReady : NSObject

@property (readonly, retain, nonatomic) NSData *tokenContent;
@property (readonly, retain, nonatomic) NSData *keyId;
@property (readonly, retain, nonatomic) NSData *signature;

- (void).cxx_destruct;
- (id)initWithTokenContent:(id)a0 tokenSignature:(id)a1 keyId:(id)a2;

@end
