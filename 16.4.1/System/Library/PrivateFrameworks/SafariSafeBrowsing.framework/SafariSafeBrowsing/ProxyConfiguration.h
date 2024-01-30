@class NSDictionary;

@interface ProxyConfiguration : NSObject

@property (readonly, nonatomic) NSDictionary *proxy;
@property (readonly, nonatomic) NSDictionary *deviceIdentificationToken;

+ (BOOL)shouldRetryForError:(id)a0;
+ (id)currentVersion;

- (void).cxx_destruct;
- (void)applyToRequest:(id)a0;
- (id)initWithDeviceIdentificationToken:(id)a0;

@end
