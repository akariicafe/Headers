@class FCDateRange, FCFeedCursor;

@interface FCFeedRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) FCFeedCursor *top;
@property (copy, nonatomic) FCFeedCursor *bottom;
@property (readonly, nonatomic) BOOL reachesTopOfFeed;
@property (readonly, nonatomic) BOOL reachesBottomOfFeed;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, copy, nonatomic) FCDateRange *dateRange;

+ (id)feedRangeWithMaxOrder:(unsigned long long)a0 minOrder:(unsigned long long)a1;
+ (id)feedRangeByMergingRange:(id)a0 withRange:(id)a1;
+ (id)feedRangeWithTop:(id)a0 bottom:(id)a1;
+ (id)feedRangeFromDateRange:(id)a0;
+ (id)feedRangeFromDate:(id)a0 toDate:(id)a1;

- (id)feedRangeByUnioningWithRange:(id)a0;
- (BOOL)intersectsRange:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsCursor:(id)a0;
- (BOOL)containsFeedRange:(id)a0;
- (BOOL)intersectsOrAdjoinsRange:(id)a0;
- (BOOL)containsOrder:(unsigned long long)a0;
- (id)feedRangeByIntersectingWithRange:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
