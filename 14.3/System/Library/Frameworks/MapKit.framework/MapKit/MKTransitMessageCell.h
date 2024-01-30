@class NSString, _MKUILabel, NSLayoutConstraint;

@interface MKTransitMessageCell : MKCustomSeparatorTableViewCell {
    _MKUILabel *_messageLabel;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (copy, nonatomic) NSString *messageText;

- (void)_contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateConstraintValues;
- (id)initWithReuseIdentifier:(id)a0;

@end
