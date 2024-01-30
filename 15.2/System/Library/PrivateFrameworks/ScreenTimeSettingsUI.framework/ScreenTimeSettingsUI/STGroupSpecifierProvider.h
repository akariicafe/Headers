@class PSSpecifier, NSArray, NSString, NSMutableArray, UIViewController;
@protocol STGroupSpecifierProviderDelegate;

@interface STGroupSpecifierProvider : NSObject <UITableViewDelegate>

@property (retain) NSMutableArray *privateSpecifiers;
@property BOOL invalid;
@property (weak, nonatomic) UIViewController<STGroupSpecifierProviderDelegate> *delegate;
@property (nonatomic) BOOL isHidden;
@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (readonly, copy, nonatomic) NSArray *specifiers;
@property (readonly) NSMutableArray *mutableSpecifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfIsHidden;

- (void)endUpdates;
- (void)lazyLoadBundle:(id)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)beginUpdates;
- (id)init;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)invalidate;
- (void)dealloc;
- (void)reloadSpecifier:(id)a0 animated:(BOOL)a1;
- (void)showConfirmationViewForSpecifier:(id)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0;
- (void)showStoreDemoAlert;
- (void)showPINSheet:(id)a0 completion:(id /* block */)a1;
- (void)showController:(id)a0 animated:(BOOL)a1;
- (void)popToViewControllerAnimated:(BOOL)a0;
- (void)_tableCellHeightDidChange:(id)a0;
- (void)reloadSectionHeaderFootersWithAnimation:(long long)a0;
- (id)specifiersAtIndexes:(id)a0;
- (void)insertSpecifiers:(id)a0 atIndexes:(id)a1;
- (void)removeSpecifiersAtIndexes:(id)a0;
- (void)replaceObjectInSpecifiersAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)replaceSpecifiersAtIndexes:(id)a0 withSpecifiers:(id)a1;

@end
