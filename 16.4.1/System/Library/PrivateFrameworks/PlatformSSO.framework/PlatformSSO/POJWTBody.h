@class NSDictionary, NSMutableDictionary, NSString, NSArray, NSMutableData, NSDate, NSNumber;

@interface POJWTBody : NSObject

@property (retain) NSMutableDictionary *data;
@property (retain) NSMutableData *passwordData;
@property (readonly) NSString *aud;
@property (readonly) NSArray *audArray;
@property (readonly) NSString *azp;
@property (readonly) NSString *iss;
@property (readonly) NSString *sub;
@property (readonly) NSDate *iat;
@property (readonly) NSDate *exp;
@property (readonly) NSDate *nbf;
@property (readonly) NSString *use;
@property (readonly) NSString *assertion;
@property (readonly) NSString *client_id;
@property (readonly) NSString *scope;
@property (readonly) NSString *nonce;
@property (readonly) NSString *request_nonce;
@property (readonly) NSString *grant_type;
@property (readonly) NSString *username;
@property (readonly) NSMutableData *password;
@property (readonly) NSString *token_type;
@property (readonly) NSNumber *expires_in;
@property (readonly) NSNumber *refresh_token_expires_in;
@property (readonly) NSDate *expires_on;
@property (readonly) NSString *refresh_token;
@property (readonly) NSString *id_token;
@property (readonly) NSDictionary *allData;

- (id)assertion;
- (id)sub;
- (id)scope;
- (id)dataRepresentation;
- (id)password;
- (id)username;
- (void)dealloc;
- (id)nonce;
- (id)init;
- (id)description;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)client_id;
- (id)use;
- (id)exp;
- (id)azp;
- (id)nbf;
- (id)aud;
- (id)iat;
- (id)iss;
- (id)audArray;
- (id)expires_in;
- (id)expires_on;
- (id)grant_type;
- (id)id_token;
- (id)initWithJWTData:(id)a0;
- (id)refresh_token;
- (id)refresh_token_expires_in;
- (id)request_nonce;
- (id)token_type;
- (void)zeroPassword;

@end
