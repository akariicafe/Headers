@class NSString;

@interface TPSAnalyticsEventHintDismissed : TPSAnalyticsEvent

@property (nonatomic) double timeToDismissal;
@property (readonly, nonatomic) NSString *contentID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *context;
@property (readonly, nonatomic) NSString *dismissType;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithContentID:(id)a0 bundleID:(id)a1 context:(id)a2 dismissType:(id)a3 timeToDismissal:(double)a4 date:(id)a5;

- (void)setDataProvider:(id)a0;
- (id)eventName;
- (void).cxx_destruct;
- (id)_initWithContentID:(id)a0 bundleID:(id)a1 context:(id)a2 dismissType:(id)a3 timeToDismissal:(double)a4 date:(id)a5;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
