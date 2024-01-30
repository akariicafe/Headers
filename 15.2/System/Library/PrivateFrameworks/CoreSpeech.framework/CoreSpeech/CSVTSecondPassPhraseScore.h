@class NSString, CSKeywordAnalyzerNDAPIResult;

@interface CSVTSecondPassPhraseScore : NSObject

@property (nonatomic) unsigned long long phId;
@property (retain, nonatomic) NSString *phStr;
@property (nonatomic) float threshold;
@property (nonatomic) float secondChanceThreshold;
@property (nonatomic) float loggingThreshold;
@property (nonatomic) BOOL useKwdSpotting;
@property (nonatomic) float recognizerScoreScaleFactor;
@property (nonatomic) float recognizerThresholdOffset;
@property (nonatomic) float satThreshold;
@property (nonatomic) float tdsrSatCombinedSATThreshold;
@property (nonatomic) float ndapiScore;
@property (nonatomic) float ctcCheckerScore;
@property (nonatomic) float combinedScore;
@property (nonatomic) BOOL isMaximized;
@property (retain, nonatomic) CSKeywordAnalyzerNDAPIResult *ndapiResult;

- (id)description;
- (void).cxx_destruct;
- (void)_update;
- (id)debugDescription;
- (float)effectiveThresholdWithSecondChanceEnabled:(BOOL)a0;
- (id)dictionaryRepresentationWithSecondChanceEnabled:(BOOL)a0;
- (BOOL)didTriggerWithSecondChanceEnabled:(BOOL)a0;
- (id)initWithPhraseInfoDict:(id)a0 useKeywordSpotting:(BOOL)a1;
- (void)updateWithNdapiResult:(id)a0;
- (void)updateWithCtcScore:(float)a0;
- (BOOL)hasNearMissTriggerWithSecondChanceEnabled:(BOOL)a0;

@end
