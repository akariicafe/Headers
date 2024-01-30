@interface _UINavigationBarTitleFontProvider : NSObject

+ (id)providerForIdiom:(long long)a0;
+ (void)registerProviderClass:(Class)a0 forIdiom:(long long)a1;

- (id)defaultInlineTitleFont;
- (id)defaultTitleFont;
- (id)defaultLargeTitleFont;

@end
