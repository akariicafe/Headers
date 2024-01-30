@protocol HMDWidgetConfigurationReaderInterface;

@interface HMDWidgetConfigurationReader : NSObject

@property (readonly) id<HMDWidgetConfigurationReaderInterface> interface;

- (id)initWithInterface:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)fetchedHomeWidgets;
- (long long)homeWidgetsEnabledCount;

@end
