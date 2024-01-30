@class NSString;

@interface CLSMediaAnalysisModel : NSObject <CLSSignalModel>

@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long currentAnalyzerVersion;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) double videoScoreThresholdToBeInteresting;
@property (readonly) double videoScoreThresholdToNotBeJunk;
@property (readonly) double autoplaySuggestionScoreThresholdToBeInteresting;
@property (readonly) double autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset;
@property (readonly) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)baseMediaAnalysisVersionWithMediaAnalysisVersion:(unsigned long long)a0;

- (id)initForTesting;
- (id)initWithMediaAnalysisVersion:(unsigned long long)a0;
- (void)setupVersion33;

@end
