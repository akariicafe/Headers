@class NSDate, NSString, TPSAnalyticsDataProvider;

@interface TPSAnalyticsEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) TPSAnalyticsDataProvider *dataProvider;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *deliveryInfoVersion;

+ (id)classSet;

- (id)eventName;
- (id)duetEvent;
- (id)initWithDate:(id)a0;
- (id)_discoverabilityStream;
- (void).cxx_destruct;
- (id)analyticsEventRepresentation;
- (void)log;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (void)persistKeys;
- (void)encodeWithCoder:(id)a0;

@end
