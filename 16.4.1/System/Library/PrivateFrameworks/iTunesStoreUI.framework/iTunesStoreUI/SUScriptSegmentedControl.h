@class NSArray, NSString, SUSegmentedControl, SUStorePageViewController, NSNumber;

@interface SUScriptSegmentedControl : SUScriptObject {
    NSArray *_segments;
    long long _style;
}

@property (readonly, nonatomic) SUSegmentedControl *activeSegmentedControl;
@property (readonly, nonatomic) NSArray *rawSegments;
@property (readonly, nonatomic) SUStorePageViewController *storePageViewController;
@property (retain, nonatomic) SUSegmentedControl *nativeSegmentedControl;
@property (readonly, nonatomic) long long nativeSelectedIndex;
@property (copy) NSString *cancelButtonTitle;
@property (copy) NSString *moreListTitle;
@property long long maximumNumberOfItems;
@property double maximumWidth;
@property (retain) id segments;
@property (retain) NSNumber *selectedIndex;
@property (readonly) NSNumber *selectedSegmentIndex;
@property (copy) id showsMoreListAutomatically;
@property (retain) NSString *style;
@property (copy) id tintColor;
@property long long tintStyle;
@property (readonly) unsigned long long controlStateDisabled;
@property (readonly) unsigned long long controlStateHighlighted;
@property (readonly) unsigned long long controlStateNormal;
@property (readonly) unsigned long long controlStateSelected;
@property (readonly) NSNumber *noSegmentIndex;
@property (readonly) long long tintStyleDark;
@property (readonly) long long tintStyleDefault;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)_newNativeSegmentedControl;
- (id)_newPageSectionGroupWithSegments:(id)a0;
- (id)_newSegmentsFromPageSectionGroup:(id)a0;
- (void)_reloadSegmentedControl:(id)a0 withSegments:(id)a1;
- (void)_reloadViewControllerPageSectionGroup;
- (long long)_sectionsStyleForString:(id)a0;
- (void)_setColor:(id)a0 forTitleTextAttribute:(id)a1 controlState:(unsigned long long)a2;
- (void)_setRawSegments:(id)a0;
- (void)hideMoreListAnimated:(BOOL)a0;
- (id)initWithPageSectionGroup:(id)a0;
- (id)makeSegmentWithTitle:(id)a0 userInfo:(id)a1;
- (id)newPageSectionGroup;
- (void)setTitleColor:(id)a0 forControlState:(unsigned long long)a1;
- (void)setTitleShadowColor:(id)a0 forControlState:(unsigned long long)a1;
- (void)showMoreListAnimated:(BOOL)a0;
- (void)showPopoverController:(id)a0 fromSegmentIndex:(long long)a1 animated:(BOOL)a2;
- (id)titleColorForControlState:(unsigned long long)a0;
- (id)titleShadowColorForControlState:(unsigned long long)a0;

@end
