@class NSError, NSString;

@interface SLYahooLoginTokenResponse : NSObject

@property (readonly) long long statusCode;
@property (readonly) NSError *error;
@property (readonly) NSString *body;
@property (readonly) NSString *loginToken;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 urlResponse:(id)a1 error:(id)a2;

@end
