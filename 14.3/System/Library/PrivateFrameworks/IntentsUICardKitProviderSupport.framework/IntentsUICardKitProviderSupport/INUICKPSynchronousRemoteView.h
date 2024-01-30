@protocol INUICKPSynchronousRemoteViewDelegate;

@interface INUICKPSynchronousRemoteView : UIView

@property (weak, nonatomic) id<INUICKPSynchronousRemoteViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
