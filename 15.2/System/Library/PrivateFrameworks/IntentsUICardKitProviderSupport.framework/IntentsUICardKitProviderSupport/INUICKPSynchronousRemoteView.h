@protocol INUICKPSynchronousRemoteViewDelegate;

@interface INUICKPSynchronousRemoteView : UIView

@property (weak, nonatomic) id<INUICKPSynchronousRemoteViewDelegate> delegate;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
