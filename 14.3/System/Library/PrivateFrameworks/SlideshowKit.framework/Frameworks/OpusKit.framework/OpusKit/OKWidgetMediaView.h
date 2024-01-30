@class UIActivityIndicatorView;

@interface OKWidgetMediaView : OKWidgetMediaViewProxy {
    UIActivityIndicatorView *_videoActivityIndicator;
}

- (void)dealloc;
- (void)showVideoActivityIndicator:(BOOL)a0;
- (id)videoActivityIndicator;

@end
