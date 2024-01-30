@class NSString;

@interface TPSAnalyticsEventContentRetrieved : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *serviceError;

+ (id)eventWithContentID:(id)a0 bundleID:(id)a1 context:(id)a2 serviceError:(id)a3;
+ (BOOL)supportsSecureCoding;
+ (id)eventWithContentID:(id)a0 serviceError:(id)a1;

- (id)_initWithContentID:(id)a0 bundleID:(id)a1 context:(id)a2 serviceError:(id)a3;
- (id)_initWithContentID:(id)a0 serviceError:(id)a1;
- (void)setDataProvider:(id)a0;
- (id)eventName;
- (void).cxx_destruct;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
