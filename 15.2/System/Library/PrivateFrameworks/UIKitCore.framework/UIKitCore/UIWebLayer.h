@interface UIWebLayer : CALayer {
    BOOL _layoutsSuspended;
}

- (void)setLayoutsSuspended:(BOOL)a0;
- (void)setNeedsLayout;

@end
