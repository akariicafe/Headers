@class UILabel, UIStackView;

@interface ConversationKit.ConversationHUDControlsStatusView : UIView <UIPointerInteractionDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ recipe;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationStatusHStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationDetailsVStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationSubtitleHStack;
    void /* unknown type, empty encoding */ leadingAccessoryView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationSubtitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_chevronLabel;
}

@property (nonatomic, retain) UIStackView *conversationDetailsVStack;
@property (nonatomic, retain) UILabel *conversationTitleLabel;
@property (nonatomic, retain) UILabel *conversationSubtitleLabel;
@property (nonatomic, retain) UILabel *chevronLabel;

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)setupRootView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;

@end
