@class NSMutableArray;

@interface PXDateRangeSet : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSMutableArray *_dateRanges;
@property (readonly, nonatomic) long long count;

+ (id)dateRangeSetWithDateRange:(id)a0;
+ (id)dateRangeSet;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dateRanges;
- (id)initWithDateRange:(id)a0;

@end
