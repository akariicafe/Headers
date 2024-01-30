@class HFItem;

@interface HFAnalyticsAccessorySettingsVisitEvent : HFAnalyticsEvent

@property (retain, nonatomic) HFItem *sourceItem;
@property (nonatomic) BOOL isHomePod;
@property (nonatomic) BOOL isMediaAccessory;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end
