@class SUScriptButton, NSArray, NSString, SUScriptNavigationItem;
@protocol SUScriptNavigationItem;

@interface SUScriptNavigationBar : SUScriptObject

@property (readonly) SUScriptNavigationItem *backNavigationItem;
@property long long barStyle;
@property (readonly) NSArray *navigationItems;
@property (copy) id translucent;
@property (readonly) SUScriptNavigationItem *topNavigationItem;
@property (readonly) long long barStyleBlack;
@property (readonly) long long barStyleDefault;
@property (retain) SUScriptButton *leftButton;
@property (retain) id<SUScriptNavigationItem> leftItem;
@property (retain) NSString *prompt;
@property (retain) SUScriptButton *rightButton;
@property (retain) id<SUScriptNavigationItem> rightItem;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)_className;
- (id)init;
- (id)attributeKeys;
- (void)setNavigationItems:(id)a0;
- (id)scriptAttributeKeys;
- (void)setLeftButton:(id)a0 animated:(BOOL)a1;
- (void)setRightButton:(id)a0 animated:(BOOL)a1;
- (id)initWithNativeNavigationBar:(id)a0;
- (id)_nativeNavigationBar;
- (void)tearDownUserInterface;
- (id)_topNavigationItem;
- (void)setLeftItem:(id)a0 animated:(BOOL)a1;
- (void)setRightItem:(id)a0 animated:(BOOL)a1;
- (id)_copyTopNavigationItem;
- (id)buttonWithTitle:(id)a0 style:(id)a1 target:(id)a2 action:(id)a3;
- (void)setBackNavigationItem:(id)a0;
- (void)setTopNavigationItem:(id)a0;

@end
