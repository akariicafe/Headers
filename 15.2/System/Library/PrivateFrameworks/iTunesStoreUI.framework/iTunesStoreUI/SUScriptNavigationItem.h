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
+ (id)webScriptNameForKeyName:(id)a0;
+ (void)disconnectNavigationItem:(id)a0 forScriptObject:(id)a1;
+ (void)_disconnectNavigationItem:(id)a0 scriptObject:(id)a1;
+ (id)_rootScriptObjectForObject:(id)a0;

- (id)leftItems;
- (id)_className;
- (id)init;
- (id)rightItems;
- (id)attributeKeys;
- (void)setLeftItems:(id)a0;
- (void)setRightItems:(id)a0;
- (void)setTitleView:(id)a0 animated:(BOOL)a1;
- (id)scriptAttributeKeys;
- (void)tearDownUserInterface;
- (id)initWithNativeNavigationItem:(id)a0;
- (void)setLeftItem:(id)a0 animated:(BOOL)a1;
- (void)setRightItem:(id)a0 animated:(BOOL)a1;
- (id)_copyScriptObjectForButtonItem:(id)a0;
- (void)setLeftItems:(id)a0 animated:(BOOL)a1;
- (void)setLeftMostItem:(id)a0 animated:(BOOL)a1;
- (void)setRightItems:(id)a0 animated:(BOOL)a1;
- (id)_copyScriptButtonForButtonItem:(id)a0;

@end
