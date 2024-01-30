@class LPTextViewStyle;

@interface LPTextRowStyle : NSObject

@property (readonly, nonatomic) LPTextViewStyle *leading;
@property (readonly, nonatomic) LPTextViewStyle *trailing;
@property (nonatomic) long long balancingMode;

- (void).cxx_destruct;
- (id)right;
- (id)left;
- (id)initWithPlatform:(long long)a0 fontScalingFactor:(double)a1;
- (void)applyToAllTextViewStyles:(id /* block */)a0;

@end
