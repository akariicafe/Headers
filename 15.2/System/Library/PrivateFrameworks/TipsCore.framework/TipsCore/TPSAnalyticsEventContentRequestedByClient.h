@class NSString;

@interface TPSAnalyticsEventContentRequestedByClient : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *context;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithBundleID:(id)a0 context:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (id)_initWithBundleID:(id)a0 context:(id)a1;

@end
