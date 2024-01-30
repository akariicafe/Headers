@class NSDictionary;

@interface CSKeywordAnalyzerNDEAPIResult : NSObject

@property (nonatomic) unsigned long long samplesFed;
@property (nonatomic) unsigned long long bestStart;
@property (nonatomic) unsigned long long bestEnd;
@property (nonatomic) float bestScore;
@property (nonatomic) BOOL isSecondChance;
@property (nonatomic) BOOL isEarlyDetect;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)init;
- (id)initWithBlob:(id)a0 isEarlyDetected:(BOOL)a1;

@end
