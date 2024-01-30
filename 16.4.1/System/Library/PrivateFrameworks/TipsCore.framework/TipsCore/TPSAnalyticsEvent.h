@class NSDate, NSString, TPSAnalyticsDataProvider;

@interface TPSAnalyticsEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) TPSAnalyticsDataProvider *dataProvider;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *deliveryInfoVersion;

- (void)encodeWithCoder:(id)a0;
- (id)eventName;
- (id)initWithCoder:(id)a0;
- (void)log;
- (id)mutableAnalyticsEventRepresentation;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)_discoverabilityStream;
- (id)analyticsEventRepresentation;
- (id)duetEvent;
- (void)persistKeys;

@end
