@class NSString, UITableViewCell, UIActivityIndicatorView;

@interface EKCalendarValidateEditItem : EKCalendarButtonEditItem {
    UITableViewCell *_cell;
    NSString *_buttonTitle;
    UIActivityIndicatorView *_spinner;
}

@property (nonatomic) BOOL showError;
@property (nonatomic) BOOL animateSpinner;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)footerTitle;
- (void)setButtonTitle:(id)a0;

@end
