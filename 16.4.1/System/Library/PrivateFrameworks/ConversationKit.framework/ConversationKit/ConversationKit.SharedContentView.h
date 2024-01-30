@interface ConversationKit.SharedContentView : UIView {
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ videoView;
    void /* unknown type, empty encoding */ videoOverlayView;
    void /* unknown type, empty encoding */ mostRecentViewModelHash;
    void /* unknown type, empty encoding */ loggingIdentifier;
    void /* unknown type, empty encoding */ participantIdentifier;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ customCornerRadius;
    void /* unknown type, empty encoding */ isScreenSharing;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
