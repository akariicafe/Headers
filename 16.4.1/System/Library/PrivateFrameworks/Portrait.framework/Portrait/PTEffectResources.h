@class NSString, PTEspressoGenericExecutor;

@interface PTEffectResources : NSObject

@property (retain, nonatomic) NSString *effectNetworkPath;
@property (retain, nonatomic) NSString *effectNetworkConfig;
@property (retain, nonatomic) PTEspressoGenericExecutor *effectNetwork;
@property (retain, nonatomic) PTEspressoGenericExecutor *segmentationNetwork;

- (void).cxx_destruct;

@end
