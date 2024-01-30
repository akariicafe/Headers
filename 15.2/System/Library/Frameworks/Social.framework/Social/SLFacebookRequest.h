@class NSString;

@interface SLFacebookRequest : SLRequest

@property (retain) NSString *accessToken;
@property int responseDataFormat;

- (id)accessToken;
- (void)setAccessToken:(id)a0;
- (id)preparedURLRequest;
- (void)setResponseDataFormat:(int)a0;
- (void)preflightRequest;
- (id)initWithURL:(id)a0 parameters:(id)a1 requestMethod:(long long)a2;
- (int)responseDataFormat;

@end
