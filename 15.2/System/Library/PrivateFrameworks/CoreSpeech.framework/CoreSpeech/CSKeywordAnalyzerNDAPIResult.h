@class NSDictionary;

@interface CSKeywordAnalyzerNDAPIResult : NSObject

@property (nonatomic) unsigned long long phraseId;
@property (nonatomic) unsigned long long samplesFed;
@property (nonatomic) unsigned long long bestPhrase;
@property (nonatomic) unsigned long long bestStart;
@property (nonatomic) unsigned long long bestEnd;
@property (nonatomic) float bestScore;
@property (nonatomic) BOOL isEarlyWarning;
@property (nonatomic) BOOL isRescoring;
@property (nonatomic) unsigned long long samplesAtFire;
@property (nonatomic) unsigned long long startSampleCount;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)init;

@end
