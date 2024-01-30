@class NSString, _MKUILabel, NSLayoutConstraint;

@interface MKTransitMessageCell : MKCustomSeparatorCell {
    _MKUILabel *_messageLabel;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (copy, nonatomic) NSString *messageText;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (id)initWithReuseIdentifier:(id)a0;
- (void)dealloc;

@end
