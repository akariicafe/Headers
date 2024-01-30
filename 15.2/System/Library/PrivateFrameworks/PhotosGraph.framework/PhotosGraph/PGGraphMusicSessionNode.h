@class NSArray, NSSet, NSDate;

@interface PGGraphMusicSessionNode : PGGraphOptimizedNode

@property (class, readonly, nonatomic) NSArray *musicSessionDateSortDescriptors;

@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) NSSet *trackNodes;

+ (id)momentOfMusicSession;

- (BOOL)hasProperties:(id)a0;
- (id)description;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)momentNodes;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)initWithLocalStartDate:(id)a0 localEndDate:(id)a1;
- (void)enumerateMusicTrackNodesUsingBlock:(id /* block */)a0;

@end
