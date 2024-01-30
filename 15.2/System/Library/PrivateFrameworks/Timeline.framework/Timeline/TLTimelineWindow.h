@class TLTimelineEntryNode, NSString, NSDate, TLTimelineSegment;

@interface TLTimelineWindow : NSObject <TLTimelineWindow, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TLTimelineEntryNode *focalNode;
@property (readonly, nonatomic) TLTimelineSegment *leftSegment;
@property (readonly, nonatomic) TLTimelineSegment *rightSegment;
@property (readonly, nonatomic) unsigned long long maxNodes;
@property (readonly, nonatomic) NSDate *leftmostContiguousEntryDate;
@property (readonly, nonatomic) NSDate *rightmostContiguousEntryDate;
@property (readonly, nonatomic) unsigned long long leftEntryCount;
@property (readonly, nonatomic) unsigned long long rightEntryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsNode:(id)a0;
- (id)initWithFocalNode:(id)a0 maxNodes:(unsigned long long)a1 leftSegmentCount:(unsigned long long)a2 rightSegmentCount:(unsigned long long)a3;
- (id)initWithFocalNode:(id)a0 leftSegment:(id)a1 rightSegment:(id)a2 maxNodes:(unsigned long long)a3;
- (id)leftmostNode;
- (id)rightmostNode;
- (id)initWithFocalNode:(id)a0 maxNodes:(unsigned long long)a1;
- (void)updateFocalNodeWithDate:(id)a0;
- (void)rebalance;

@end
