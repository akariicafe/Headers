@class NSCountedSet, NSString, NSSet;

@interface FCTopicalNode : NSObject <NSCopying> {
    double _score;
}

@property (retain) NSString *identifier;
@property (retain, nonatomic) NSSet *identifiers;
@property (retain, nonatomic) NSSet *displayedElements;
@property (retain, nonatomic) NSCountedSet *topicCollections;
@property (weak, nonatomic) FCTopicalNode *parent;
@property (retain, nonatomic) NSSet *children;
@property (nonatomic) double score;
@property (nonatomic) double scoreMultiplier;
@property (nonatomic) BOOL scored;
@property (nonatomic) double relatedness;
@property (nonatomic) double specificity;
@property (nonatomic) double parentRawScore;
@property (nonatomic) double relatednessThreshold;
@property (nonatomic) double relatednessKWeight;
@property (nonatomic) double topicScoreWeight;
@property (nonatomic) double highestScoringRelativeScoreMultiplier;
@property (retain, nonatomic) NSString *storedNodeIdentifier;

- (id)initWithIdentifier:(id)a0 displayedElements:(id)a1 allTopicCollections:(id)a2 relatednessThreshold:(double)a3 relatednessKWeight:(double)a4 topicScoreWeight:(double)a5 highestScoringRelativeScoreMultiplier:(double)a6;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)leaves;
- (long long)compare:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)calculateLeafScoresWithTopicScoreProvider:(id /* block */)a0;
- (void)considerEdge:(id)a0 withNodeScorer:(id /* block */)a1;
- (double)individualScoreWithTopicScoreProvider:(id /* block */)a0;
- (void)calculateNonLeafScoresWithTopicProvider:(id /* block */)a0;
- (void)calculateScoreWithTopicScoreProvider:(id /* block */)a0;

@end
