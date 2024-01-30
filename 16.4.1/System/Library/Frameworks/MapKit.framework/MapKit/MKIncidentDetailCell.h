@class UITextView, NSString, UIImageView, UIImage, NSDate, _MKUILabel, NSLayoutConstraint;

@interface MKIncidentDetailCell : MKTableViewCell <UITextViewDelegate> {
    _MKUILabel *_titleLabel;
    UIImageView *_iconImageView;
    UITextView *_descriptionLabel;
    _MKUILabel *_lastUpdatedLabel;
    NSLayoutConstraint *_titleFirstBaselineToTopConstraint;
    NSLayoutConstraint *_descriptionLastBaselineToBottomConstraint;
    NSLayoutConstraint *_lastUpdatedFirstBaselineToDescriptionFirstBaselineConstraint;
    NSLayoutConstraint *_lastUpdatedLastBaselineToBottomConstraint;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *incidentDescription;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeCategoryDidChange;
- (void)didMoveToWindow;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)dealloc;
- (void)updateConstraints;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_setConstraints;
- (void)_updateConstraintValues;
- (void)_updateLastUpdatedLabel;
- (void)infoCardThemeChanged;

@end
