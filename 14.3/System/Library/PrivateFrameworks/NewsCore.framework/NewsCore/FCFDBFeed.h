@class NSString, NSOrderedSet, NSDate, NSNumber;

@interface FCFDBFeed : NSManagedObject

@property (retain, nonatomic) NSString *feedID;
@property (nonatomic) NSNumber *lookupID;
@property (retain, nonatomic) NSDate *refreshDate;
@property (nonatomic) unsigned long long refreshedToOrder;
@property (retain, nonatomic) NSOrderedSet *segments;

- (void)enumerateGapsWithBlock:(id /* block */)a0;
- (id)firstSegmentFollowingFeedRange:(id)a0;
- (void)_visitContiguousSegmentsInRange:(id)a0 withBlock:(id /* block */)a1;
- (void)awakeFromFetch;
- (void)insertFeedItems:(id)a0 ckCursor:(id)a1 plausibleRange:(id)a2 segmentEntity:(id)a3 itemEntity:(id)a4 itemIndexEntity:(id)a5 moc:(id)a6 indexFeatures:(BOOL)a7;
- (id)contiguousRangeInRange:(id)a0;
- (id)prune;
- (void)willAccessFeedRange:(id)a0;
- (void)insertSegment:(id)a0;
- (id)contiguousSegmentsInFeedRange:(id)a0;
- (void)willTurnIntoFault;

@end
