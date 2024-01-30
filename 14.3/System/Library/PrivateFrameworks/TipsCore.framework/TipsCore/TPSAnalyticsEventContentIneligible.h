@class NSString;

@interface TPSAnalyticsEventContentIneligible : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *contentID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *context;
@property (readonly, nonatomic) unsigned long long displayType;
@property (readonly, nonatomic) long long reason;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithContentID:(id)a0 bundleID:(id)a1 context:(id)a2 displayType:(unsigned long long)a3 reason:(long long)a4 date:(id)a5;

- (id)eventName;
- (id)duetEvent;
- (void).cxx_destruct;
- (id)_initWithContentID:(id)a0 bundleID:(id)a1 context:(id)a2 displayType:(unsigned long long)a3 reason:(long long)a4 date:(id)a5;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
