@class UIColor, UIFont;

@interface RUIStyle : NSObject

@property (retain, nonatomic) UIColor *radioGroupSelectedColor;
@property (retain, nonatomic) UIColor *labelRowTextColor;
@property (retain, nonatomic) UIColor *buttonRowTextColor;
@property (retain, nonatomic) UIColor *selectPageDetailTextColor;
@property (retain, nonatomic) UIColor *titleLabelTextColor;
@property (retain, nonatomic) UIColor *headerLabelTextColor;
@property (retain, nonatomic) UIColor *subHeaderLabelTextColor;
@property (retain, nonatomic) UIColor *detailHeaderLabelTextColor;
@property (retain, nonatomic) UIColor *footerLabelTextColor;
@property (retain, nonatomic) UIColor *focusedRowTextColor;
@property (retain, nonatomic) UIFont *footerFont;
@property (nonatomic) long long labelRowTextAlignment;
@property (nonatomic) long long headerLabelAlignment;
@property (nonatomic) long long subHeaderLabelAlignment;
@property (nonatomic) long long footerLabelAlignment;
@property (nonatomic) long long footerLinkAlignment;
@property (nonatomic) double footerTopMargin;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) long long navBarActivityIndicatorStyle;
@property (readonly, nonatomic) long long tableViewStyle;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double subHeaderTopMargin;
@property (nonatomic) double sectionSpacing;
@property (nonatomic) double headerImagePadding;
@property (nonatomic) BOOL useNonOBStyleButton;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } headerMargin;
@property (nonatomic) double multiChoiceStackViewTopAndBottomMargin;
@property (nonatomic) double multiChoiceStackViewElementSpacing;
@property (nonatomic) double headerContainerSideMargin;
@property (nonatomic) double sectionHeaderHeight;
@property (retain, nonatomic) UIColor *spinnerLabelColor;
@property (retain, nonatomic) UIFont *spinnerLabelFont;
@property (retain, nonatomic) UIFont *navBarButtonLabelFont;
@property (nonatomic) double navBarLabelSpacingWithImage;
@property (nonatomic) double minimumHeightOfAdaptiveSheet;

+ (id)sharedInstance;
+ (id)defaultStyle;
+ (id)setupAssistantStyle;
+ (id)setupAssistantModalStyle;
+ (id)_staticButtonTitleColorWithTintColor:(id)a0;
+ (id)frontRowStyle;
+ (id)osloStyle;
+ (id)watchDefaultStyle;

- (id)init;
- (void).cxx_destruct;
- (void)applyToLabel:(id)a0;
- (void)applyToObjectModel:(id)a0;
- (void)applyToNavigationBar:(id)a0;
- (void)applyToNavigationController:(id)a0;
- (id)boldButtonTitleColorWithTintColor:(id)a0;

@end
