@class NSMutableArray;

@interface _RelevanceScorerData : NSObject

@property (retain, nonatomic) NSMutableArray *finalRelevanceScores;
@property (retain, nonatomic) NSMutableArray *indexMapping;
@property (nonatomic) unsigned long long inputCount;
@property (retain, nonatomic) NSMutableArray *names;
@property (retain, nonatomic) NSMutableArray *addresses;
@property (retain, nonatomic) NSMutableArray *mapItems;

- (void).cxx_destruct;
- (id)initWithNames:(id)a0 addresses:(id)a1 mapItems:(id)a2;

@end
