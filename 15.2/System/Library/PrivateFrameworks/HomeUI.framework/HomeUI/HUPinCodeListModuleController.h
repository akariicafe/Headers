@class NSString, HUPinCodeDetailsViewController, UIBarButtonItem;

@interface HUPinCodeListModuleController : HUItemTableModuleController <HUUserSwitchCellDelegate, HUSwitchCellDelegate, HFItemSectionAccessoryButtonHeaderDelegate, HUPinCodeDetailsViewDelegate>

@property (nonatomic) BOOL editing;
@property (retain, nonatomic) HUPinCodeDetailsViewController *addGuestViewController;
@property (retain, nonatomic) UIBarButtonItem *addGuestDoneButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIBarButtonItem *addButtonItem;

- (void)hideSpinner;
- (BOOL)canSelectItem:(id)a0;
- (void).cxx_destruct;
- (void)showSpinner;
- (unsigned long long)didSelectItem:(id)a0;
- (id)initWithModule:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)itemSection:(id)a0 accessoryButtonPressedInHeader:(id)a1;
- (void)userSwitchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)addGuestDoneButtonPressed:(id)a0;
- (void)cancelAddGuest:(id)a0;
- (void)_switchCell:(id)a0 didTurnOn:(BOOL)a1;

@end
