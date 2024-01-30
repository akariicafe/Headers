@interface ICAppearanceInfo : NSObject

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL isDark;

+ (id)appearanceInfoWithType:(unsigned long long)a0;
+ (void)enumerateAppearanceTypesUsingBlock:(id /* block */)a0;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
