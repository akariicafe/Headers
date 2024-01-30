@class NSArray, NSString;

@interface SUSimpleMenuViewController : SUMenuViewController

@property (copy, nonatomic) NSArray *titles;
@property (copy, nonatomic) NSString *cancelButtonTitle;

- (long long)numberOfMenuItems;
- (void)dealloc;
- (void)_cancelAction:(id)a0;
- (id)initWithTitles:(id)a0;
- (BOOL)isMenuItemEnabledAtIndex:(long long)a0;
- (void)reloadContentSizeForViewInPopover;
- (id)titleOfMenuItemAtIndex:(long long)a0;

@end
