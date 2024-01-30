@class NSString;

@interface TPSAnalyticsEventContentLinkTapped : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *contentID;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithContentID:(id)a0;

- (id)eventName;
- (void).cxx_destruct;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (id)_initWithContentID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
