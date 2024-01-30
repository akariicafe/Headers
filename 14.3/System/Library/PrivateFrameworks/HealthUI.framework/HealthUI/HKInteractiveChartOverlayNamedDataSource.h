@class NSString;
@protocol HKChartCacheDataSource;

@interface HKInteractiveChartOverlayNamedDataSource : NSObject

@property (retain, nonatomic) id<HKChartCacheDataSource> dataSource;
@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ contextTitleForTimeScope;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 named:(id)a1 withContextTitleForTimeScope:(id /* block */)a2;

@end
