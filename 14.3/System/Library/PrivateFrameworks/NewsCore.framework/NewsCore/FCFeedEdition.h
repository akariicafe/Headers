@class FCDateRange, NSDate;

@interface FCFeedEdition : NSObject <NSCopying>

@property (copy, nonatomic) NSDate *keyDate;
@property (copy, nonatomic) FCDateRange *feedDateRange;

+ (id)editionWithKeyDate:(id)a0 feedDateRange:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithKeyDate:(id)a0 feedDateRange:(id)a1;

@end
