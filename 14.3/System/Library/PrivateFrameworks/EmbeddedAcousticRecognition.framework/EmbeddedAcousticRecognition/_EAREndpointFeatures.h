@class NSArray;

@interface _EAREndpointFeatures : NSObject

@property (nonatomic) long long wordCount;
@property (nonatomic) long long trailingSilenceDuration;
@property (nonatomic) double endOfSentenceLikelihood;
@property (copy, nonatomic) NSArray *pauseCounts;
@property (nonatomic) double silencePosterior;
@property (nonatomic) double clientSilenceFramesCountMs;
@property (nonatomic) double clientSilenceProbability;
@property (nonatomic) float silencePosteriorNF;
@property (nonatomic) float serverFeaturesLatency;
@property (nonatomic) long long eagerResultEndTime;

- (void).cxx_destruct;
- (id)initWithWordCount:(long long)a0 trailingSilenceDuration:(long long)a1 endOfSentenceLikelihood:(double)a2 pauseCounts:(id)a3 silencePosterior:(double)a4 clientSilenceFramesCountMs:(double)a5 clientSilenceProbability:(double)a6 silencePosteriorNF:(float)a7 serverFeaturesLatency:(float)a8;
- (id)description;
- (id)initWithWordCount:(long long)a0 trailingSilenceDuration:(long long)a1 endOfSentenceLikelihood:(double)a2 pauseCounts:(id)a3 silencePosterior:(double)a4 clientSilenceFramesCountMs:(double)a5 clientSilenceProbability:(double)a6 silencePosteriorNF:(float)a7 serverFeaturesLatency:(float)a8 eagerResultEndTime:(long long)a9;

@end
