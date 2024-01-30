@class NSString, UITableViewCell, UIActivityIndicatorView, UILabel;

@interface EKCalendarValidateEditItem : EKCalendarButtonEditItem {
    UITableViewCell *_cell;
    NSString *_buttonTitle;
    UIActivityIndicatorView *_spinner;
    UILabel *_buttonTextLabel;
}

@property (nonatomic) BOOL showError;
@property (nonatomic) BOOL animateSpinner;
@property (nonatomic) BOOL URLIsSpam;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setButtonTitle:(id)a0;
- (id)footerTitle;

@end
