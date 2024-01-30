@class NSString, NSDictionary, NSError, NSDate;

@interface SLYahooOAuth2MigrationResponse : NSObject

@property (readonly) long long statusCode;
@property (readonly) NSError *error;
@property (readonly) NSDictionary *responseBody;
@property (readonly) NSString *accessToken;
@property (readonly) NSString *refreshToken;
@property (readonly) NSDate *expiryDate;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 urlResponse:(id)a1 error:(id)a2;

@end
