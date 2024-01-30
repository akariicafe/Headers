@class NSIndexPath, UIBarButtonItem, UITableView, UIDatePicker, NSObject, NSMutableArray, UIView, NSString, SKUIGiftSendDateSection, UIPopoverController, SKUIGiftValidator, SKUIGiftItemView, SKUIGiftValidationResponse, SKUIGiftAddressingSection, SKUIGiftTermsAndConditionsSection, SKUIGiftAmountSection, UIImage;
@protocol OS_dispatch_source;

@interface SKUIGiftComposeViewController : SKUIGiftStepViewController <UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    SKUIGiftAddressingSection *_addressingSection;
    SKUIGiftAmountSection *_amountSection;
    UIDatePicker *_datePicker;
    UIImage *_itemImage;
    SKUIGiftItemView *_itemView;
    SKUIGiftValidationResponse *_lastValidationResponse;
    UIView *_searchResultsView;
    NSMutableArray *_sections;
    SKUIGiftSendDateSection *_sendDateSection;
    NSIndexPath *_showDatePickerIndexPathAfterKeyboardDismiss;
    UITableView *_tableView;
    BOOL _tappedNextWhileValidating;
    SKUIGiftTermsAndConditionsSection *_termsSection;
    NSObject<OS_dispatch_source> *_validationTimer;
    SKUIGiftValidator *_validator;
    UIPopoverController *_datePickerPopover;
    UIPopoverController *_peoplePickerPopover;
    UIPopoverController *_searchResultsPopover;
}

@property (retain, nonatomic) UIBarButtonItem *nextButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)_itemView;
- (void)_reloadSections;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)_headerView;
- (BOOL)popoverControllerShouldDismissPopover:(id)a0;
- (void)loadView;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)_cancelAction:(id)a0;
- (void)dealloc;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_itemImage;
- (void)_nextAction:(id)a0;
- (id)initWithGift:(id)a0 configuration:(id)a1;
- (void)_keyboardChangeNotification:(id)a0;
- (void)_recipientsDidChangeNotification:(id)a0;
- (void)_textFieldChangeNotification:(id)a0;
- (void)_textViewChangeNotification:(id)a0;
- (void)_textViewDidEndEditingNotification:(id)a0;
- (void)_setItemImage:(id)a0 error:(id)a1;
- (void)_validateGiftThrottled:(BOOL)a0;
- (void)_removeDatePickerIfPossible;
- (void)_showDatePickerForRowAtIndexPath:(id)a0;
- (void)_pushThemePickerOrShowInvalidAlert;
- (void)_validateGift;
- (void)_amountControlAction:(id)a0;
- (void)_datePickerAction:(id)a0;
- (void)_showDatePickerPopoverForRowAtIndexPath:(id)a0;
- (void)_finishValidationWithResponse:(id)a0 error:(id)a1;
- (void)tableView:(id)a0 giftRecipientCellDidChangeRecipients:(id)a1;
- (void)tableView:(id)a0 giftRecipientCellDidChangeSize:(id)a1;
- (void)tableView:(id)a0 giftRecipientCell:(id)a1 didUpdateSearchController:(id)a2;
- (void)tableView:(id)a0 giftRecipientCell:(id)a1 dismissContactPicker:(id)a2;
- (void)tableView:(id)a0 giftRecipientCell:(id)a1 presentContactPicker:(id)a2;

@end
