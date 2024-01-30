@interface ConversationKit.ParticipantViewButton : UIControl {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ blurView;
    void /* unknown type, empty encoding */ discView;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ colorConfiguration;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;

- (BOOL)isSelected;
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
