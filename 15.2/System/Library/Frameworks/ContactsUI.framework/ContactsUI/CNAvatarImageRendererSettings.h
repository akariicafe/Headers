@protocol CNSchedulerProvider, CNUILikenessRendering, CNUIPRLikenessResolver;

@interface CNAvatarImageRendererSettings : NSObject

@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNUIPRLikenessResolver> likenessResolver;
@property (readonly, nonatomic) id<CNUILikenessRendering> likenessRenderer;
@property (nonatomic) unsigned long long style;

+ (id)settingsWithContactStore:(id)a0 cacheSize:(unsigned long long)a1;
+ (id)offMainThreadSynchronousRenderingOnlySettingsWithCacheSize:(unsigned long long)a0;
+ (id)settingsWithContactStore:(id)a0 cacheSize:(unsigned long long)a1 schedulerProvider:(id)a2;
+ (id)defaultSettings;
+ (id)settingsWithContactStore:(id)a0;
+ (id)defaultSettingsWithCacheSize:(unsigned long long)a0;
+ (id)settingsWithContactStore:(id)a0 schedulerProvider:(id)a1;
+ (id)settingsWithContactStore:(id)a0 cacheSize:(unsigned long long)a1 schedulerProvider:(id)a2 concurrentCaches:(BOOL)a3;

- (void).cxx_destruct;
- (id)initWithLikenessResolver:(id)a0 likenessRenderer:(id)a1 schedulerProvider:(id)a2;

@end
