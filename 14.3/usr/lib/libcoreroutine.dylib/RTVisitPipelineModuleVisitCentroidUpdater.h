@class NSString, RTVisitHyperParameter, RTLocation;

@interface RTVisitPipelineModuleVisitCentroidUpdater : NSObject <RTVisitPipelineModule>

@property (readonly, nonatomic) RTVisitHyperParameter *hyperParameter;
@property (readonly, nonatomic) RTLocation *referenceLocation;
@property (readonly, nonatomic) unsigned int invalidBinIndex;
@property (readonly, nonatomic) unsigned int *binCounts;
@property (readonly, nonatomic) unsigned long long binCountsSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHyperParameter:(id)a0;
- (id)process:(id)a0;
- (unsigned long long)modeBinIndex;
- (void)updateCountFromNorthing:(double)a0 easting:(double)a1;
- (id)modeWithReferenceLocation:(id)a0;

@end
