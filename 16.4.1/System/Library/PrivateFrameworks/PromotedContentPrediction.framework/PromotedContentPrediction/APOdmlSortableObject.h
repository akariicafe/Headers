@class NSNumber;
@protocol APOdmlRankable;

@interface APOdmlSortableObject : NSObject

@property (readonly, nonatomic) id<APOdmlRankable> rankable;
@property (readonly, nonatomic) NSNumber *pTTR;

- (void).cxx_destruct;
- (id)initWithRankable:(id)a0 andPTTR:(id)a1;

@end
