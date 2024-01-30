@class ATXInformationStore;

@interface ATXWidgetModeEventProvider : NSObject {
    ATXInformationStore *_informationStore;
}

- (void).cxx_destruct;
- (id)initWithInformationStore:(id)a0;
- (id)widgetEngagementCountSinceStartDate:(id)a0;
- (id)widgetModeEventsBetweenStartDate:(id)a0 endDate:(id)a1;

@end
