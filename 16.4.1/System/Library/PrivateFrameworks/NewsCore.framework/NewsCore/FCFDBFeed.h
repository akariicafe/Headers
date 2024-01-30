@class NSString, NSOrderedSet, NSDate, NSNumber;

@interface FCFDBFeed : NSManagedObject

@property (retain, nonatomic) NSString *feedID;
@property (nonatomic) NSNumber *lookupID;
@property (retain, nonatomic) NSDate *refreshDate;
@property (nonatomic) unsigned long long refreshedToOrder;
@property (retain, nonatomic) NSOrderedSet *segments;

- (id)prune;
- (void)awakeFromFetch;
- (void)_visitContiguousSegmentsInRange:(id)a0 withBlock:(id /* block */)a1;
- (id)lastSegmentPrecedingOrder:(unsigned long long)a0;
- (id)contiguousRangeInRange:(id)a0;
- (void)insertSegment:(id)a0;
- (void)insertFeedItems:(id)a0 ckCursor:(id)a1 plausibleRange:(id)a2 segmentEntity:(id)a3 itemEntity:(id)a4 itemIndexEntity:(id)a5 moc:(id)a6 indexFeatures:(BOOL)a7;
- (void)enumerateGapsWithBlock:(id /* block */)a0;
- (void)willTurnIntoFault;
- (id)contiguousSegmentsInFeedRange:(id)a0;
- (id)firstSegmentFollowingCursor:(id)a0;
- (void)willAccessFeedRange:(id)a0;
- (id)lastSegmentPrecedingCursor:(id)a0;

@end
