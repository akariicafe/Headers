@class NSString, PXHUDVisualization;

@interface PXHUDAbstractVisualizationView : UIView <PXHUDVisualizationDelegate>

@property (retain, nonatomic) PXHUDVisualization *visualization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)visualizationDidChange:(id)a0;
- (void)visualizationDidUpdate;

@end
