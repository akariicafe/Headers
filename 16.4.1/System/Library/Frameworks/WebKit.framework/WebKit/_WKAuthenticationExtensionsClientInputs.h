@class NSString;

@interface _WKAuthenticationExtensionsClientInputs : NSObject

@property (copy, nonatomic) NSString *appid;
@property (nonatomic) BOOL googleLegacyAppidSupport;

- (void)dealloc;

@end
