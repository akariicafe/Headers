@interface LPPointUnit : NSObject <LPCSSText, LPHTMLAttributeText>

@property (readonly, nonatomic) double value;

+ (id)zero;

- (id)_lp_CSSText;
- (id)_lp_HTMLAttributeText;
- (id)initWithValue:(double)a0;

@end
