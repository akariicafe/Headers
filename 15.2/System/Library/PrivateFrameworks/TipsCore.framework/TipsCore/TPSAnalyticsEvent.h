@class NSDate, NSString, TPSAnalyticsDataProvider;

@interface TPSAnalyticsEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) TPSAnalyticsDataProvider *dataProvider;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *deliveryInfoVersion;

- (id)initWithDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)log;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (void)persistKeys;
- (id)duetEvent;
- (id)_discoverabilityStream;
- (id)analyticsEventRepresentation;

@end
