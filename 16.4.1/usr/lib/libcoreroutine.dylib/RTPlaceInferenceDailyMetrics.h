@class RTDefaultsManager, NSMutableDictionary;

@interface RTPlaceInferenceDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)initWithDefaultsManager:(id)a0;
- (void)increaseCountForClientMappingIndex:(int)a0;
- (id)getClientKeyForDefaultManager:(int)a0;
- (void)submit;
- (id)init;
- (id)description;
- (void)create;
- (id)getClientKeyForDailyMetrics:(int)a0;
- (void).cxx_destruct;
- (BOOL)shouldSubmit;
- (void)reset;

@end
