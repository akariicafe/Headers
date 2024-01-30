@class NSString, PUParallaxLayerStackViewModel;

@interface PUParallaxLayerStackView : UIView <PXChangeObserver>

@property (retain, nonatomic) PUParallaxLayerStackViewModel *viewModel;
@property (nonatomic) struct CGPoint { double x; double y; } motionVector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateContainerFrame;
- (void)updateLayerViewContents;

@end
