@class NSString, UIImage, UIColor;

@interface SBFluidSwitcherItemContainerHeaderItem : NSObject <NSCopying>

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (nonatomic) long long subtitleInterfaceStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
