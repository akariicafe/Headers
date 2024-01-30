@class NSString, NSDictionary, NSDate, NSError;

@interface SLYahooWebOAuth2TokenResponse : NSObject <SLWebOAuth2TokenResponse>

@property (readonly) long long statusCode;
@property (readonly) NSDictionary *data;
@property (readonly) NSString *token;
@property (readonly) NSString *refreshToken;
@property (readonly) NSString *idToken;
@property (readonly) NSDate *expiryDate;
@property (readonly) NSError *error;
@property (readonly) NSString *errorMessage;
@property (readonly) NSString *GUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 urlResponse:(id)a1 error:(id)a2;

@end
