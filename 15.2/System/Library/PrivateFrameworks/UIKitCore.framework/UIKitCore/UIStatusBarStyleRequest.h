@class NSNumber, UIColor;

@interface UIStatusBarStyleRequest : NSObject <NSMutableCopying, NSCopying>

@property (readonly, retain, nonatomic) NSNumber *overrideHeight;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long legibilityStyle;
@property (readonly, retain, nonatomic) UIColor *foregroundColor;
@property (readonly, nonatomic) double foregroundAlpha;

- (BOOL)isTranslucent;
- (BOOL)isLegacy;
- (BOOL)isDoubleHeight;
- (id)initWithStyle:(long long)a0 legibilityStyle:(long long)a1 foregroundColor:(id)a2 overrideHeight:(id)a3;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStyle:(long long)a0 legacy:(BOOL)a1 legibilityStyle:(long long)a2 foregroundColor:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStyle:(long long)a0 legibilityStyle:(long long)a1 foregroundColor:(id)a2 foregroundAlpha:(double)a3;
- (id)initWithStyle:(long long)a0 legacy:(BOOL)a1 legibilityStyle:(long long)a2 foregroundColor:(id)a3 foregroundAlpha:(double)a4;
- (unsigned long long)hash;
- (id)initWithStyle:(long long)a0 legibilityStyle:(long long)a1 foregroundColor:(id)a2 foregroundAlpha:(double)a3 overrideHeight:(id)a4;
- (id)initWithStyle:(long long)a0 legibilityStyle:(long long)a1 foregroundColor:(id)a2;
- (id)_copyWithZone:(struct _NSZone { } *)a0 class:(Class)a1;

@end
