@class NSDictionary, NSString, PSSpecifier;
@protocol STCustomizeDaysListControllerDelegate;

@interface STCustomizeDaysListController : PSListController <STUIDateTimePickerCellDelegate>

@property (retain, nonatomic) PSSpecifier *timePickerSpecifier;
@property (retain, nonatomic) PSSpecifier *selectedDaySpecifier;
@property (weak, nonatomic) id<STCustomizeDaysListControllerDelegate> delegate;
@property (copy, nonatomic) NSDictionary *timeByDay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)datePickerChanged:(id)a0;
- (id)datePickerForSpecifier:(id)a0;
- (id)_localizedDayNames;
- (id)budgetTime:(id)a0;
- (void)_showOrHidePickerSpecifierForSpecifier:(id)a0;
- (id)_localizedDayOrder;

@end
