@class CNContactStore;
@protocol CNUILikenessRendering, CNSchedulerProvider, CNUIPRLikenessResolver;

@interface CNAvatarViewControllerSettings : NSObject

@property (retain, nonatomic) id<CNUIPRLikenessResolver> likenessResolver;
@property (retain, nonatomic) id<CNUILikenessRendering> likenessRenderer;
@property (retain, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (nonatomic) unsigned long long style;

+ (id)defaultSettings;
+ (id)defaultSettingsWithCacheSize:(unsigned long long)a0 threeDTouchEnabled:(BOOL)a1;
+ (id)settingsWithContactStore:(id)a0;
+ (id)settingsWithContactStore:(id)a0 cacheSize:(unsigned long long)a1 threeDTouchEnabled:(BOOL)a2;
+ (id)settingsWithContactStore:(id)a0 threeDTouchEnabled:(BOOL)a1;
+ (id)settingsWithLikenessResolver:(id)a0 likenessRenderer:(id)a1 contactStore:(id)a2 threeDTouchEnabled:(BOOL)a3 schedulerProvider:(id)a4;
+ (BOOL)threeDTouchEnabledDefaultValue;

- (id)initWithLikenessResolver:(id)a0 likenessRenderer:(id)a1 contactStore:(id)a2 threeDTouchEnabled:(BOOL)a3 schedulerProvider:(id)a4;
- (void).cxx_destruct;

@end
