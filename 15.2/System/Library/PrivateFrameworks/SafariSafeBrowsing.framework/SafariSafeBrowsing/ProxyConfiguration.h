@class NSDictionary;

@interface ProxyConfiguration : NSObject

@property (readonly, nonatomic) NSDictionary *proxy;
@property (readonly, nonatomic) NSDictionary *deviceIdentificationToken;

+ (id)currentVersion;
+ (BOOL)shouldRetryForError:(id)a0;

- (void)applyToRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeviceIdentificationToken:(id)a0;

@end
