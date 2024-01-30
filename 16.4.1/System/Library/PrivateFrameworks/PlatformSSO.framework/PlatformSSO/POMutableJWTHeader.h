@class NSString, NSNumber, NSDictionary;

@interface POMutableJWTHeader : POJWTHeader

@property (retain) NSString *typ;
@property (retain) NSString *cty;
@property (retain) NSString *alg;
@property (retain) NSString *x5c;
@property (retain) NSString *x5t;
@property (retain) NSString *kid;
@property (retain) NSString *enc;
@property (retain) NSString *p2s;
@property (retain) NSNumber *p2c;
@property (retain) NSDictionary *epk;
@property (retain) NSString *apu;
@property (retain) NSString *apv;

- (void)setApu:(id)a0;
- (void)setEnc:(id)a0;
- (void)setEpk:(id)a0;
- (void)setP2s:(id)a0;
- (void)setTyp:(id)a0;
- (void)setX5c:(id)a0;
- (void)setAlg:(id)a0;
- (void)setApv:(id)a0;
- (void)setCty:(id)a0;
- (void)setKid:(id)a0;
- (void)setP2c:(id)a0;
- (void)setX5t:(id)a0;
- (void)addCustomClaims:(id)a0;
- (void)addEphemeralPublicKey:(struct __SecKey { } *)a0;

@end
