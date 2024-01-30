@class NSString;

@interface TPSAnalyticsEventHintNotDisplayed : TPSAnalyticsEvent

@property (readonly, copy, nonatomic) NSString *contentID;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, copy, nonatomic) NSString *displayType;
@property (readonly, copy, nonatomic) NSString *reason;

+ (BOOL)supportsSecureCoding;

- (void)setDataProvider:(id)a0;
- (id)eventName;
- (id)duetEvent;
- (id)initWithReason:(id)a0 lastOfferedContentID:(id)a1 lastOfferedBundleID:(id)a2 lastOfferedContext:(id)a3;
- (void).cxx_destruct;
- (id)initWithContentID:(id)a0 bundleID:(id)a1 context:(id)a2 displayType:(id)a3 reason:(id)a4 date:(id)a5;
- (id)initWithReason:(id)a0 lastOfferedContentID:(id)a1 lastOfferedBundleID:(id)a2 lastOfferedContext:(id)a3 date:(id)a4;
- (id)initWithContentID:(id)a0 bundleID:(id)a1 reason:(long long)a2 context:(id)a3 date:(id)a4;
- (id)initWithContentID:(id)a0 reason:(long long)a1 context:(id)a2;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
