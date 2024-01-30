@interface SharedWithYou.CommunicationControl : UIControl {
    void /* unknown type, empty encoding */ touchUpInsideActionIdentifier;
    void /* unknown type, empty encoding */ communicationChannel;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ sBehaviors;
    void /* unknown type, empty encoding */ menu;
    void /* unknown type, empty encoding */ enablementLock;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ label;
@property (nonatomic) BOOL enabled;

- (id)initWithCoder:(id)a0;
- (BOOL)isEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
