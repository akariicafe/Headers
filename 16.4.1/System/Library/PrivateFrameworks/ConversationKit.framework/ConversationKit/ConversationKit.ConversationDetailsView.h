@class UILabel, UIStackView;

@interface ConversationKit.ConversationDetailsView : UIView {
    void /* unknown type, empty encoding */ recipe;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationDetailsVStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationSubtitleHStack;
    void /* unknown type, empty encoding */ leadingAccessoryView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationSubtitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_chevronLabel;
    void /* unknown type, empty encoding */ conversationSubtitleBadge;
    void /* unknown type, empty encoding */ presentationStyle;
}

@property (nonatomic, retain) UIStackView *conversationDetailsVStack;
@property (nonatomic, retain) UILabel *conversationTitleLabel;
@property (nonatomic, retain) UILabel *conversationSubtitleLabel;
@property (nonatomic, retain) UILabel *chevronLabel;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
