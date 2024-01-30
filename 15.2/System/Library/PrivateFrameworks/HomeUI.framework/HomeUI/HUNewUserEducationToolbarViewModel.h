@class UIColor, NSString;

@interface HUNewUserEducationToolbarViewModel : HUNewUserEducationBaseViewModel

@property (class, readonly, nonatomic) double toolBarHeight;
@property (class, readonly, nonatomic) UIColor *toolBarTextColor;

@property (readonly, nonatomic) long long accessoryArrowViewStyle;
@property (readonly, nonatomic) NSString *accessoryArrowViewTitle;
@property (readonly, nonatomic) long long flexibleSpaceBarButtonStyle;
@property (readonly, nonatomic) long long learnMoreBarButtonStyle;
@property (readonly, nonatomic) NSString *learnMoreButtonTitle;

- (void).cxx_destruct;
- (id)init;

@end
