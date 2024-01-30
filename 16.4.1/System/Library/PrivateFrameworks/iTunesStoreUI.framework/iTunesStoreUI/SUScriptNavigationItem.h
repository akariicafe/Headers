@class UINavigationItem, NSString;
@protocol SUScriptNavigationItem;

@interface SUScriptNavigationItem : SUScriptObject

@property (readonly, nonatomic) UINavigationItem *nativeNavigationItem;
@property (copy) NSString *backButtonTitle;
@property (retain) NSString *prompt;
@property (retain) NSString *title;
@property (retain) id titleView;
@property id hidesBackButton;
@property id leftItemsSupplementBackButton;
@property (retain) id<SUScriptNavigationItem> leftItem;
@property (retain) id<SUScriptNavigationItem> leftMostItem;
@property (retain) id<SUScriptNavigationItem> rightItem;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (void)_disconnectNavigationItem:(id)a0 scriptObject:(id)a1;
+ (id)_rootScriptObjectForObject:(id)a0;
+ (void)disconnectNavigationItem:(id)a0 forScriptObject:(id)a1;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (id)_className;
- (id)attributeKeys;
- (void)setTitleView:(id)a0 animated:(BOOL)a1;
- (id)leftItems;
- (id)rightItems;
- (void)setLeftItems:(id)a0;
- (void)setRightItems:(id)a0;
- (id)scriptAttributeKeys;
- (id)_copyScriptButtonForButtonItem:(id)a0;
- (id)_copyScriptObjectForButtonItem:(id)a0;
- (id)initWithNativeNavigationItem:(id)a0;
- (void)setLeftItem:(id)a0 animated:(BOOL)a1;
- (void)setLeftItems:(id)a0 animated:(BOOL)a1;
- (void)setLeftMostItem:(id)a0 animated:(BOOL)a1;
- (void)setRightItem:(id)a0 animated:(BOOL)a1;
- (void)setRightItems:(id)a0 animated:(BOOL)a1;
- (void)tearDownUserInterface;

@end
