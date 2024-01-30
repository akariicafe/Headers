@class FCTopicalNode;

@interface FCTopicalEdge : NSObject

@property (retain, nonatomic) FCTopicalNode *a;
@property (retain, nonatomic) FCTopicalNode *b;
@property (nonatomic) BOOL relatednessCalculated;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic) unsigned long long containsAButNotB;
@property (nonatomic) unsigned long long containsAAndB;
@property (nonatomic) unsigned long long containsBButNotA;
@property (readonly, nonatomic) unsigned long long totalObservations;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)independentCountForNode:(id)a0;
- (void)calculateRelatedness;
- (id)initWithNode:(id)a0 andNode:(id)a1;

@end
