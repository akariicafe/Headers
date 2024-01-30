@class NSString, NSArray, NSDate, NSMutableData, NSNumber;

@interface POMutableJWTBody : POJWTBody

@property (retain) NSString *aud;
@property (retain) NSArray *audArray;
@property (retain) NSString *azp;
@property (retain) NSString *iss;
@property (retain) NSString *sub;
@property (retain) NSDate *iat;
@property (retain) NSDate *exp;
@property (retain) NSDate *nbf;
@property (retain) NSString *use;
@property (retain) NSString *assertion;
@property (retain) NSString *client_id;
@property (retain) NSString *scope;
@property (retain) NSString *nonce;
@property (retain) NSString *request_nonce;
@property (retain) NSString *grant_type;
@property (retain) NSString *username;
@property (retain) NSMutableData *password;
@property (retain) NSString *token_type;
@property (retain) NSNumber *expires_in;
@property (retain) NSNumber *refresh_token_expires_in;
@property (retain) NSDate *expires_on;
@property (retain) NSString *refresh_token;
@property (retain) NSString *id_token;

- (void)setScope:(id)a0;
- (void)setAssertion:(id)a0;
- (void)setUsername:(id)a0;
- (void)setPassword:(id)a0;
- (void)setSub:(id)a0;
- (void)setNonce:(id)a0;
- (void)setExp:(id)a0;
- (void)setUse:(id)a0;
- (void)setAud:(id)a0;
- (void)setIss:(id)a0;
- (void)setNbf:(id)a0;
- (void)setAzp:(id)a0;
- (void)setIat:(id)a0;
- (void)addCustomClaims:(id)a0;
- (void)setAudArray:(id)a0;
- (void)setClient_id:(id)a0;
- (void)setExpires_in:(id)a0;
- (void)setExpires_on:(id)a0;
- (void)setGrant_type:(id)a0;
- (void)setId_token:(id)a0;
- (void)setRefresh_token:(id)a0;
- (void)setRefresh_token_expires_in:(id)a0;
- (void)setRequest_nonce:(id)a0;
- (void)setToken_type:(id)a0;

@end
