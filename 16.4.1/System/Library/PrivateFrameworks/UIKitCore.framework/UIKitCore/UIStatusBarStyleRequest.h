@class NSNumber, UIColor;

@interface UIStatusBarStyleRequest : NSObject <NSMutableCopying, NSCopying>

@property (readonly, retain, nonatomic) NSNumber *overrideHeight;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long legibilityStyle;
@property (readonly, retain, nonatomic) UIColor *foregroundColor;
@property (readonly, nonatomic) double foregroundAlpha;

- (id)initWithStyle:(long long)a0 legacy:(BOOL)a1 legibilityStyle:(long long)a2 foregroundColor:(id)a3 foregroundAlpha:(double)a4;
- (id)_copyWithZone:(struct _NSZone { } *)a0 class:(Class)a1;
- (id)initWithStyle:(long long)a0 legibilityStyle:(long long)a1 foregroundColor:(id)a2;
- (id)initWithStyle:(long long)a0 legacy:(BOOL)a1 legibilityStyle:(long long)a2 foregroundColor:(id)a3;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStyle:(long long)a0 legibilityStyle:(long long)a1 foregroundColor:(id)a2 foregroundAlpha:(double)a3;
- (id)initWithStyle:(long long)a0 legibilityStyle:(long long)a1 foregroundColor:(id)a2 foregroundAlpha:(double)a3 overrideHeight:(id)a4;
- (BOOL)isLegacy;
- (BOOL)isDoubleHeight;
- (BOOL)isTranslucent;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStyle:(long long)a0 legibilityStyle:(long long)a1 foregroundColor:(id)a2 overrideHeight:(id)a3;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
