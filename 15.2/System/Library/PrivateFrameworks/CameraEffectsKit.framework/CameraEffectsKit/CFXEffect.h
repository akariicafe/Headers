@class NSString, JFXEffect;

@interface CFXEffect : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isNone;
@property (retain, nonatomic) JFXEffect *jtEffect;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedTitle;

+ (id)effectIdentifiersForEffectType:(id)a0;
+ (void)setupFactoryDelegate;
+ (void)initEffectRegistry;
+ (void)preWarmShaderCache;
+ (id)effectWithIdentifier:(id)a0 forEffectType:(id)a1;
+ (id)effectWithJTEffect:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithJTEffect:(id)a0;

@end
