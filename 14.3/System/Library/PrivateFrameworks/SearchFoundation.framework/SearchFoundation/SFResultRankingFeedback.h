@class NSArray, SFSearchResult;

@interface SFResultRankingFeedback : SFFeedback <NSCopying>

@property (retain, nonatomic) SFSearchResult *result;
@property (copy, nonatomic) NSArray *hiddenResults;
@property (copy, nonatomic) NSArray *duplicateResults;
@property (nonatomic) unsigned long long localResultPosition;
@property (nonatomic) double personalizationScore;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(id)a0 hiddenResults:(id)a1 duplicateResults:(id)a2 localResultPosition:(unsigned long long)a3;
- (void)encodeWithCoder:(id)a0;

@end
