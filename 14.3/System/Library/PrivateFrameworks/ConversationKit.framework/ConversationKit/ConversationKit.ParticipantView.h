@interface ConversationKit.ParticipantView : UIView {
    void /* unknown type, empty encoding */ backgroundEffectsView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ monogramView;
    void /* unknown type, empty encoding */ videoView;
    void /* unknown type, empty encoding */ alertView;
    void /* unknown type, empty encoding */ videoOverlayView;
    void /* unknown type, empty encoding */ debugLabel;
    void /* unknown type, empty encoding */ mostRecentViewModelHash;
    void /* unknown type, empty encoding */ loggingIdentifier;
    void /* unknown type, empty encoding */ hideBottomBarTimer;
    void /* unknown type, empty encoding */ hideAlertViewTimer;
    void /* unknown type, empty encoding */ participantIdentifier;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ customCornerRadius;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ bottomBar;
@property (nonatomic) void /* unknown type, empty encoding */ isInRoster;
@property (nonatomic) void /* unknown type, empty encoding */ isExpanded;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
