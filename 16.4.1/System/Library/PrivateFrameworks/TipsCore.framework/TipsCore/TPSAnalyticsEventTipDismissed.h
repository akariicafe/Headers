@class NSString;

@interface TPSAnalyticsEventTipDismissed : TPSAnalyticsEvent

@property (nonatomic) double timeToDismissal;
@property (readonly, nonatomic) NSString *tipID;
@property (readonly, nonatomic) NSString *correlationID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *context;
@property (nonatomic) unsigned long long displayCount;
@property (readonly, nonatomic) NSString *dismissType;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 correlationID:(id)a1 bundleID:(id)a2 context:(id)a3 dismissType:(id)a4 timeToDismissal:(double)a5 date:(id)a6;

- (void)encodeWithCoder:(id)a0;
- (id)eventName;
- (id)initWithCoder:(id)a0;
- (id)mutableAnalyticsEventRepresentation;
- (void)setDataProvider:(id)a0;
- (void).cxx_destruct;
- (id)_initWithTipID:(id)a0 correlationID:(id)a1 bundleID:(id)a2 context:(id)a3 dismissType:(id)a4 timeToDismissal:(double)a5 date:(id)a6;

@end
