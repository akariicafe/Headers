@class NSString;

@interface BSUIVibrancyValues : NSObject <NSCopying>

@property (readonly, nonatomic) long long resolvedEffectType;
@property (readonly, nonatomic) NSString *resolvedGroupName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)calculateValuesForConfiguration:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
