@class _TtC15ConversationKit19InCallControlButton;

@interface ConversationKit.InCallControlsParticipantCell : UICollectionViewListCell {
    void /* unknown type, empty encoding */ statusIcon;
    void /* unknown type, empty encoding */ avatarView;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ cameraSymbolImage;
    void /* unknown type, empty encoding */ copresenceSymbolImage;
    void /* unknown type, empty encoding */ linkSymbolImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lmiApproveButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lmiRejectButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_kickMemberButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentViews;
    void /* unknown type, empty encoding */ callDelegate;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ nameLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ subtitleLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ actionButton;
@property (nonatomic, retain) _TtC15ConversationKit19InCallControlButton *lmiApproveButton;
@property (nonatomic, retain) _TtC15ConversationKit19InCallControlButton *lmiRejectButton;
@property (nonatomic, retain) _TtC15ConversationKit19InCallControlButton *kickMemberButton;

- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
