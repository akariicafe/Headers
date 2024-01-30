@class NSArray, NSSet, NSDate;

@interface PGGraphMusicSessionNode : PGGraphOptimizedNode

@property (class, readonly, nonatomic) NSArray *musicSessionDateSortDescriptors;

@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) NSSet *momentNodes;
@property (readonly, nonatomic) NSSet *trackNodes;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)description;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;
- (void)enumerateMusicTrackNodesUsingBlock:(id /* block */)a0;

@end
