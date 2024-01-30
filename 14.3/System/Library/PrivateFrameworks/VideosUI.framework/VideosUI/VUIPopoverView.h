@class NSString, TVImageProxy, VUILegacyButton, VUIPopoverDescriptor;

@interface VUIPopoverView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) VUILegacyButton *tvPopoverButton;
@property (nonatomic, getter=isImageLoaded) BOOL imageLoaded;
@property (retain, nonatomic) TVImageProxy *imageProxy;
@property (retain, nonatomic) VUIPopoverDescriptor *popoverDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_popoverButtonPressed:(id)a0;

@end
