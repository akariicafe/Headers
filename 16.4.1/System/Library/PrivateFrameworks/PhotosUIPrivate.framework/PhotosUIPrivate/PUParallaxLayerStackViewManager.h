@class NSArray, NSMutableDictionary, NSString, PUParallaxLayerStackViewModel;

@interface PUParallaxLayerStackViewManager : NSObject <PXChangeObserver>

@property (readonly, weak, nonatomic) PUParallaxLayerStackViewModel *viewModel;
@property (readonly, nonatomic) NSMutableDictionary *viewsByLayerIdentifier;
@property (readonly, nonatomic) NSArray *createdLayerViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void).cxx_destruct;
- (void)_layoutViews;
- (void)_layoutLayerView:(id)a0;
- (void)_updateViewContents;
- (id)viewForLayer:(id)a0;

@end
