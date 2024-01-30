@class UIColor;

@interface PKGradientVerticalConnector : NSObject

@property (readonly, nonatomic) UIColor *topGradientColor;
@property (readonly, nonatomic) UIColor *bottomGradientColor;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithTopGradientColor:(id)a0 bottomGradientColor:(id)a1;

@end
