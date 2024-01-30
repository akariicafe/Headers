@interface CNKParticipantScreenShareInfoView : UIView {
    void /* unknown type, empty encoding */ nameLabel;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ avatarImageView;
    void /* unknown type, empty encoding */ backgroundBlurView;
    void /* unknown type, empty encoding */ normalConstraints;
    void /* unknown type, empty encoding */ fullScreenConstraints;
    void /* unknown type, empty encoding */ isFullScreenMode;
}

@property (nonatomic) void /* unknown type, empty encoding */ customCornerRadius;
@property (nonatomic, readonly) double preferredHeight;
@property (nonatomic, retain) void /* unknown type, empty encoding */ avatarImage;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)configureWith:(id)a0 isFullScreenMode:(BOOL)a1;

@end
