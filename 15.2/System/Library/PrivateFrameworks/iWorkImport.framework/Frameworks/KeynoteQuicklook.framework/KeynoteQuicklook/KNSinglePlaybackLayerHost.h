@class CALayer, NSString, KNAnimationScreenEnvironment;

@interface KNSinglePlaybackLayerHost : NSObject <KNPlaybackLayerHost> {
    CALayer *_containerLayer;
}

@property (readonly, nonatomic) CALayer *rootLayer;
@property (readonly, nonatomic) KNAnimationScreenEnvironment *screenEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRootLayerRectToContainer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContainerLayer:(id)a0 screenEnvironment:(id)a1;

@end
