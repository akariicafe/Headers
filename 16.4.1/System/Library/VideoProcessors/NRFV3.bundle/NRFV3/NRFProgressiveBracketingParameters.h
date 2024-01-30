@class NSString, NSDictionary, NRFProgressiveBracketingStatistics, NSArray;

@interface NRFProgressiveBracketingParameters : NSObject {
    NSArray *_firstGroupParameters;
    NSArray *_nextGroupParameters;
    NSArray *_lastGroupParameters;
    int _numberOfGroups;
    int _minAGC;
}

@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NRFProgressiveBracketingStatistics *statistics;
@property (readonly, nonatomic) double totalIntegrationTime;
@property (readonly, nonatomic) int mode;
@property (readonly, nonatomic) BOOL recomputeAWBCCM;
@property (readonly, nonatomic) float evZeroTargetGain;
@property (readonly, nonatomic) float previewSNR;

- (void).cxx_destruct;
- (double)computeTotalIntegrationTimeWithStatistics:(id)a0 forMode:(int)a1;
- (id)currentBracketingParametersForGroup:(int)a0;
- (id)initWithOptions:(id)a0 portType:(id)a1 statistics:(id)a2 mode:(int)a3;
- (float)evZeroTargetGainWithStatistics:(id)a0 maxNominalEVZeroIntegrationTime:(double)a1;
- (double)_computeMaxIntegrationTimeWithOptions:(id)a0 statistics:(id)a1;
- (double)_computeTotalIntegrationTimeFromFirstGroupParameters:(id)a0 nextGroupParameters:(id)a1 lastGroupParameters:(id)a2 numberOfGroups:(int)a3;
- (void)_createBracketGroup:(id)a0 statistics:(id)a1 evZeroRatios:(id)a2 maxEVZeroGain:(float)a3 maxNominalEVZeroIntegrationTime:(double)a4 maxIntegrationTime:(double)a5;
- (float)_estimateSNRatShutterScale:(float)a0 statistics:(id)a1 rawThumbnail:(float *)a2 thumbnailSorted:(BOOL)a3 clippingThreshold:(float)a4 numBrackets:(int)a5;
- (float)_getGroupExposureTime:(id)a0;
- (float)_getGroupSNR:(id)a0 statistics:(id)a1 rawThumbnail:(float *)a2 thumbnailSorted:(BOOL)a3 snrClippingThreshold:(float)a4;
- (id)_lowLightFrameParametersWithStatistics:(id)a0 evRatio:(double)a1 maxEVZeroGain:(float)a2 maxNominalEVZeroIntegrationTime:(double)a3 maxIntegrationTime:(double)a4;
- (void)_preprocessAEThumbnailFromStatistics:(id)a0 bitMask:(unsigned int)a1 bitShift:(int)a2 processedThumbnail:(float *)a3;
- (double)_selectBracketsAndComputeExposureTimeWithOption:(id)a0 statistics:(id)a1 getAllInfo:(BOOL)a2 updateDecision:(BOOL)a3 minTotalExposureTime:(double)a4;
- (id)_truncateGroupParameters:(id)a0 maxTotalExpTime:(float)a1 minNumFrames:(unsigned int)a2;

@end
