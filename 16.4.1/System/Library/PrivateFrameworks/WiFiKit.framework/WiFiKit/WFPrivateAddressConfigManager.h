@interface WFPrivateAddressConfigManager : NSObject

@property (nonatomic) struct __SCPreferences { } *prefs;

- (id)privateAddressConfig;
- (void)dealloc;
- (id)init;

@end
