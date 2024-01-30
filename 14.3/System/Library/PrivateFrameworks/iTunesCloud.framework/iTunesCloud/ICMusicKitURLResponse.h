@class NSString;

@interface ICMusicKitURLResponse : ICURLResponse

@property (readonly, copy, nonatomic) NSString *serverCorrelationKey;
@property (readonly, copy, nonatomic) NSString *serverEnvironment;

- (void).cxx_destruct;
- (void)_initializeMusicKitURLResponse;
- (id)initWithURLResponse:(id)a0 urlRequest:(id)a1 bodyDataURL:(id)a2 performanceMetrics:(id)a3;
- (id)description;
- (id)initWithURLResponse:(id)a0 urlRequest:(id)a1 bodyData:(id)a2 performanceMetrics:(id)a3;

@end
