@class NSString;

@interface TPSAnalyticsEventContentRequestedByClient : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *context;

+ (id)eventWithBundleID:(id)a0 context:(id)a1;
+ (BOOL)supportsSecureCoding;

- (id)eventName;
- (id)_initWithBundleID:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
