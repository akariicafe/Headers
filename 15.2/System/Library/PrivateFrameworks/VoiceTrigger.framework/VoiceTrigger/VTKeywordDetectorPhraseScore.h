@interface VTKeywordDetectorPhraseScore : NSObject

@property (nonatomic) unsigned long long phraseId;
@property (nonatomic) float score;

- (id)initWithPhraseId:(unsigned long long)a0 withScore:(float)a1;

@end
