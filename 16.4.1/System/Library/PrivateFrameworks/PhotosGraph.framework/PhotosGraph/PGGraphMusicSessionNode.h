@class NSArray, NSSet, NSDate;

@interface PGGraphMusicSessionNode : PGGraphOptimizedNode

@property (class, readonly, nonatomic) NSArray *musicSessionDateSortDescriptors;

@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) NSSet *trackNodes;

+ (id)momentOfMusicSession;

- (unsigned short)domain;
- (id)momentNodes;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (id)description;
- (id)propertyDictionary;
- (void).cxx_destruct;
- (void)enumerateMusicTrackNodesUsingBlock:(id /* block */)a0;
- (id)initWithLocalStartDate:(id)a0 localEndDate:(id)a1;

@end
