@class NSArray, NSString;

@interface CSServerEndpointFeatures : NSObject

@property (nonatomic) long long wordCount;
@property (nonatomic) long long trailingSilenceDuration;
@property (nonatomic) double eosLikelihood;
@property (copy, nonatomic) NSArray *pauseCounts;
@property (nonatomic) double silencePosterior;
@property (nonatomic) long long processedAudioDurationInMilliseconds;
@property (copy, nonatomic) NSString *taskName;

- (id)initWithWordCount:(long long)a0 trailingSilenceFrames:(long long)a1 endOfSilenceLikelihood:(double)a2 pauseCounts:(id)a3 silencePosterior:(double)a4 taskName:(id)a5;
- (id)description;
- (id)initWithWordCount:(long long)a0 trailingSilenceDuration:(long long)a1 eosLikelihood:(double)a2 pauseCounts:(id)a3 silencePosterior:(double)a4 taskName:(id)a5 processedAudioDurationInMilliseconds:(long long)a6;
- (void).cxx_destruct;
- (id)dictionary;

@end
