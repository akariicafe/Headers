@class NSString, NSIndexSet;

@interface CHMutableTokenizedTextResultToken : CHTokenizedTextResultToken

@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSIndexSet *strokeIndexes;
@property (nonatomic) unsigned int wordID;
@property (nonatomic) double recognitionScore;
@property (nonatomic) double combinedScore;
@property (nonatomic) double alignmentScore;
@property (nonatomic) unsigned long long properties;
@property (nonatomic) long long substrokeCount;

- (void)setString:(id)a0;
- (void)setProperties:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCombinedScore:(double)a0;
- (void)setWordID:(unsigned int)a0;
- (void)setStrokeIndexes:(id)a0;
- (void)setRecognitionScore:(double)a0;
- (void)setAlignmentScore:(double)a0;
- (void)setSubstrokeCount:(long long)a0;

@end
