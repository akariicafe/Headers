@class NSString, _MKUILabel, NSLayoutConstraint;

@interface MKTransitMessageCell : MKCustomSeparatorCell {
    _MKUILabel *_messageLabel;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (copy, nonatomic) NSString *messageText;

- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_updateConstraintValues;

@end
