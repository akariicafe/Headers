@class NSString, CLKDevice;

@interface NWCDailyForecastUltravioletIndexViewBuilder : NSObject <NWCDailyForecastViewBuildable>

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)createDailyForecastView;

@end
