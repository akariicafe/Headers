@class UIColor, UIFont;

@interface WFAppearanceProxy : NSObject

@property (nonatomic) long long tableViewStyle;
@property (nonatomic) UIFont *cellTextLabelFont;
@property (retain, nonatomic) UIColor *tableViewCellBackgroundColor;

+ (id)defaultAppearanceProxy;
+ (id)setupAppearanceProxy;

- (void)apply;
- (void).cxx_destruct;

@end
