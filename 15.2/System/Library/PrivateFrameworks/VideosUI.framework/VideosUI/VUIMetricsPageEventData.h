@class NSString, NSDictionary;

@interface VUIMetricsPageEventData : NSObject

@property (retain, nonatomic) NSString *pageId;
@property (retain, nonatomic) NSString *pageType;
@property (retain, nonatomic) NSDictionary *eventData;

+ (id)createWithPageId:(id)a0 andPageType:(id)a1 andEventData:(id)a2;
+ (id)createWithPageType:(id)a0;
+ (id)createWithMetricsData:(id)a0;

- (void).cxx_destruct;
- (id)generateMetricsDataDictionary;

@end
