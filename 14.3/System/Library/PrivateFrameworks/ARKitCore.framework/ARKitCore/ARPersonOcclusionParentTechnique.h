@class NSArray, NSString, ARTechnique;
@protocol ARTechniqueForwardingStrategy, ARMLDepthDataSourceProvider;

@interface ARPersonOcclusionParentTechnique : ARParentTechnique <ARTechniqueDelegate> {
    double _lastDetectedPersonTimeStamp;
    BOOL _detectedPerson;
    Class _detectionTechniqueClass;
    BOOL _shouldSkipFramesWhenBusy;
    ARTechnique<ARMLDepthDataSourceProvider> *_depthTechnique;
    struct __CVBuffer { } *_placeholderDepthBuffer;
}

@property (copy) NSArray *allTechniques;
@property (copy) NSArray *personDetectionTechniques;
@property (retain, nonatomic) id<ARTechniqueForwardingStrategy> depthTechniqueProcessingStrategy;
@property (nonatomic) long long optimizationStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)processData:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)technique:(id)a0 didOutputResultData:(id)a1 timestamp:(double)a2 context:(id)a3;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (void)reconfigureFrom:(id)a0;
- (id)initWithTechniques:(id)a0 delegate:(id)a1;
- (id)techniquesToRunWithForwardedDepth:(BOOL)a0;

@end
