@class NSString, NSDictionary, NSError;

@interface DAEASOpenIDMetadataResponse : NSObject

@property (readonly, nonatomic) NSString *tokenRequestURI;
@property (readonly, nonatomic) NSString *authorizationURI;
@property (readonly, nonatomic) NSString *jwksURI;
@property (readonly, nonatomic) NSString *issuer;
@property (readonly, nonatomic) NSDictionary *data;
@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *errorMessage;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 urlResponse:(id)a1 error:(id)a2;

@end
