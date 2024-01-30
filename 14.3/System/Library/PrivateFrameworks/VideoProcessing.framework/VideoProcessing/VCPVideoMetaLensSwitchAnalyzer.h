@interface VCPVideoMetaLensSwitchAnalyzer : NSObject

@property (nonatomic) BOOL hadZoom;
@property (nonatomic) float minZoom;
@property (nonatomic) float maxZoom;

- (id)init;
- (id)results;

@end
