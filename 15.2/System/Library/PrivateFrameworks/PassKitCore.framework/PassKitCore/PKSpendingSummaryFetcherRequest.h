@class NSDate;

@interface PKSpendingSummaryFetcherRequest : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) BOOL withLastChange;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
