@class PRPosterColor, PRTimeFontConfiguration;

@interface PRMutableEditingLookProperties : PREditingLookProperties

@property (copy, nonatomic) PRTimeFontConfiguration *timeFontConfiguration;
@property (copy, nonatomic) PRPosterColor *titlePosterColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithTimeFontConfiguration:(id)a0 titlePosterColor:(id)a1;

@end
