@class LPTextViewStyle;

@interface LPTextRowStyle : NSObject

@property (readonly, nonatomic) LPTextViewStyle *leading;
@property (readonly, nonatomic) LPTextViewStyle *trailing;
@property (nonatomic) long long balancingMode;

- (id)left;
- (id)initWithPlatform:(long long)a0;
- (void).cxx_destruct;
- (id)right;
- (void)applyToAllTextViewStyles:(id /* block */)a0;

@end
