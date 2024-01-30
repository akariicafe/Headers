@class UIFont, NSString, UIImage, NSArray, UIImageView, UIButton, UITableView, UILabel, UIActivityIndicatorView;

@interface GKContentView : UIView {
    UITableView *_table;
    UIImageView *_tableWellView;
    BOOL _needsLayout;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) NSString *title;
@property (nonatomic) NSString *message;
@property (nonatomic) UIImage *icon;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *otherButton;
@property (readonly, retain, nonatomic) NSArray *connectionButtons;
@property (readonly, retain, nonatomic) UITableView *table;
@property (nonatomic) long long numberOfTitleLines;
@property (nonatomic) long long numberOfMessageLines;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) UIFont *messageFont;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;

+ (double)maxTextWidth;

- (void)layoutIfNeeded;
- (id)table;
- (id)titleFont;
- (id)message;
- (id)title;
- (void)setMessage:(id)a0;
- (long long)numberOfTitleLines;
- (id)icon;
- (void)setNumberOfTitleLines:(long long)a0;
- (void)setIcon:(id)a0;
- (void)layout;
- (void)setTitle:(id)a0;
- (void)dealloc;
- (void)showActivityIndicator:(BOOL)a0;
- (id)messageFont;
- (void)_createCancelButtonWithTitle:(id)a0;
- (void)_createOtherButtonWithTitle:(id)a0;
- (id)_createConnectionButtonWithType:(unsigned long long)a0;
- (void)_createTitleLabelIfNeeded;
- (void)_createMessageLabelIfNeeded;
- (id)_createButton:(BOOL)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 icon:(id)a2 cancelButtonTitle:(id)a3 otherButtonTitle:(id)a4;
- (void)setConnectionButtonTypes:(unsigned long long)a0;
- (long long)numberOfMessageLines;
- (void)setNumberOfMessageLines:(long long)a0;

@end
