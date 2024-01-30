@interface SiriUIHelpButton : SiriUIContentButton {
    BOOL _animatingEmphasis;
    BOOL _emphasized;
}

+ (id)buttonWithHelpImageMask;

- (void)pulse;
- (void)setEmphasized:(BOOL)a0;
- (double)_targetAlpha;

@end
