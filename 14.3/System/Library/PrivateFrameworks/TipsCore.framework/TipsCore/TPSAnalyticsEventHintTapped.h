@class NSString;

@interface TPSAnalyticsEventHintTapped : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *context;

+ (id)eventWithContentID:(id)a0 bundleID:(id)a1 context:(id)a2;
+ (BOOL)supportsSecureCoding;
+ (id)eventWithContentID:(id)a0;

- (void)setDataProvider:(id)a0;
- (id)eventName;
- (void).cxx_destruct;
- (id)_initWithContentID:(id)a0 bundleID:(id)a1 context:(id)a2;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (id)_initWithContentID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
