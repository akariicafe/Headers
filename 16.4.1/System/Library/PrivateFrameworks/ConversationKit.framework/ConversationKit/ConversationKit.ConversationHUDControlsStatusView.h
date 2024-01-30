@class _TtC15ConversationKit23ConversationDetailsView;

@interface ConversationKit.ConversationHUDControlsStatusView : UIView <UIPointerInteractionDelegate> {
    void /* unknown type, empty encoding */ recipe;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ menuHostViewController;
    void /* unknown type, empty encoding */ presentationStyle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationStatusHStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_trailingActionsView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationDetailsView;
    void /* unknown type, empty encoding */ leadingAccessoryView;
}

@property (nonatomic, retain) _TtC15ConversationKit23ConversationDetailsView *conversationDetailsView;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)setupRootView;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
