@interface AAPasswordSecurityUIRequest : AAAppleIDSettingsRequest

@property (nonatomic) unsigned long long spyglassOptionMask;

- (id)urlRequest;
- (id)urlString;

@end
