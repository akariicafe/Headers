@class AVPlayerLayer;

@interface WebVideoContainerLayer : CALayer {
    struct RetainPtr<AVPlayerLayer> { void *m_ptr; } _playerLayer;
}

@property (retain, nonatomic) AVPlayerLayer *playerLayer;

- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (id).cxx_construct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
