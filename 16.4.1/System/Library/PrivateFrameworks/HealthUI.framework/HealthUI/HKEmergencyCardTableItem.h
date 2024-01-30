@class NSString, UIViewController, _HKMedicalIDData;

@interface HKEmergencyCardTableItem : NSObject

@property (retain, nonatomic) _HKMedicalIDData *data;
@property (retain, nonatomic) NSString *profileFirstName;
@property (weak, nonatomic) UIViewController *owningViewController;
@property (nonatomic) BOOL isSecondaryProfile;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (nonatomic) BOOL shouldShowHints;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInset;
- (long long)numberOfRows;
- (void)localeDidChange:(id)a0;
- (id)init;
- (id)title;
- (void).cxx_destruct;
- (void)commitEditing;
- (id)initInEditMode:(BOOL)a0;
- (id)titleForHeader;
- (id)titleForFooter;
- (id)_dequeueNoValueCellInTableView:(id)a0 withTitle:(id)a1;
- (id)_dequeueNoValueCellInTableView:(id)a0 withTitle:(id)a1 disabled:(BOOL)a2;
- (BOOL)canEditRowAtIndex:(long long)a0;
- (long long)commitEditingStyle:(long long)a0 forRowAtIndex:(long long)a1;
- (void)didCommitEditingStyle:(long long)a0 forRowAtIndex:(long long)a1;
- (long long)editingStyleForRowAtIndex:(long long)a0;
- (BOOL)hasPresentableData;
- (BOOL)shouldHighlightRowAtIndex:(long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndex:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndex:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndex:(long long)a1;
- (void)timeZoneDidChange:(id)a0;

@end
