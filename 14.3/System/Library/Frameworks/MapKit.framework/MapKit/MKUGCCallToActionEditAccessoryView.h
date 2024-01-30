@class NSString, UIButton, UIActivityIndicatorView;
@protocol UGCCallToActionEditAccessoryViewDelegate;

@interface MKUGCCallToActionEditAccessoryView : UIView <MKActivityObserving> {
    UIButton *_editButton;
    UIActivityIndicatorView *_spinner;
}

@property (weak, nonatomic) id<UGCCallToActionEditAccessoryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupEditButton;
- (void)_editButtonPressed;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (void)_contentSizeChanged;

@end
