@interface PMFlatVideoOverlayButton : UIView <PMVideoOverlayButton> {
    long long _style;
}

- (void)layoutSubviews;
- (long long)style;
- (id)initWithStyle:(long long)a0;

@end
