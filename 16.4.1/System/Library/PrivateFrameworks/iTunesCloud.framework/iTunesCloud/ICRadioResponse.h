@class NSDictionary, ICURLAggregatedPerformanceMetrics, NSDate, NSError, ICStoreDialogResponse;

@interface ICRadioResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *contentDictionary;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) long long version;
@property (retain, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (readonly, copy, nonatomic) ICStoreDialogResponse *dialog;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSError *serverError;

- (id)initWithResponseDictionary:(id)a0 expirationDate:(id)a1;
- (id)initWithURLResponse:(id)a0;
- (void).cxx_destruct;

@end
