@class UIColor;

@interface RUIStyle : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
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
@property (nonatomic) long long labelRowTextAlignment;
@property (nonatomic) long long headerLabelAlignment;
@property (nonatomic) long long subHeaderLabelAlignment;
@property (nonatomic) long long footerLabelAlignment;
@property (nonatomic) long long footerLinkAlignment;
@property (readonly, nonatomic) long long navBarActivityIndicatorStyle;
@property (retain, nonatomic) UIColor *tintColor;

+ (id)sharedInstance;
+ (id)defaultStyle;
+ (id)setupAssistantModalStyle;
+ (id)setupAssistantStyle;
+ (id)frontRowStyle;

- (id)init;
- (void).cxx_destruct;
- (void)applyToLabel:(id)a0;
- (void)applyToObjectModel:(id)a0;
- (void)applyToNavigationController:(id)a0;

@end
