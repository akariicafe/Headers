@interface PGLongTailAdditionalOptions : NSObject

@property (nonatomic) unsigned long long qualityPercentile;
@property (nonatomic) unsigned long long verifiedPersonScoreValue;
@property (nonatomic) unsigned long long topTierAestheticScoreValue;

- (id)initWithDictionary:(id)a0;
- (id)init;

@end
