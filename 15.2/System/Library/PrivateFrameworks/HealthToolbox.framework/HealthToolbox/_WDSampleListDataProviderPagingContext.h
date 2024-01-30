@class NSDate;
@protocol HKSampleListDataFetcher;

@interface _WDSampleListDataProviderPagingContext : NSObject

@property (nonatomic) BOOL requiresPaging;
@property (nonatomic, getter=isFetchingData) BOOL fetchingData;
@property (retain, nonatomic) NSDate *earliestProcessedSampleDate;
@property (retain, nonatomic) id<HKSampleListDataFetcher> currentDataFetcher;
@property (retain, nonatomic) NSDate *fetchUntilDate;

- (void).cxx_destruct;

@end
