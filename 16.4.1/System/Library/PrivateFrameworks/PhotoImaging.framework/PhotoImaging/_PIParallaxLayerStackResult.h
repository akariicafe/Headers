@class NSString, PFParallaxLayerStack;
@protocol NURenderStatistics;

@interface _PIParallaxLayerStackResult : _NURenderResult <PIParallaxLayerStackResult>

@property (retain, nonatomic) PFParallaxLayerStack *layerStack;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
