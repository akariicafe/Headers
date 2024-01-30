@class NSString, NSDictionary;

@interface VTKeywordAnalyzerPhraseScore : NSObject

@property (nonatomic) unsigned long long phraseId;
@property (retain, nonatomic) NSString *phStr;
@property (nonatomic) unsigned long long samplesFed;
@property (nonatomic) unsigned long long bestStart;
@property (nonatomic) unsigned long long bestEnd;
@property (nonatomic) float bestScore;
@property (nonatomic) BOOL isEarlyWarning;
@property (nonatomic) BOOL isRescoring;
@property (nonatomic) BOOL isSecondChance;
@property (nonatomic) unsigned long long samplesAtFire;
@property (nonatomic) unsigned long long startSampleCount;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (void).cxx_destruct;
- (id)init;

@end
