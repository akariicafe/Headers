@class HKQuery, NSDate;

@interface _WDSampleListDataProviderPagingContext : NSObject

@property (nonatomic) BOOL requiresPaging;
@property (nonatomic, getter=isFetchingData) BOOL fetchingData;
@property (retain, nonatomic) NSDate *earliestProcessedSampleDate;
@property (retain, nonatomic) HKQuery *currentQuery;
@property (retain, nonatomic) NSDate *fetchUntilDate;

- (void).cxx_destruct;

@end
