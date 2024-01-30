@class NSNumber, NSDictionary;

@interface ASDAppMetricsEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long eventSubtype;
@property (copy, nonatomic) NSNumber *eventTime;
@property (nonatomic) long long eventType;
@property (nonatomic, getter=isPosted) BOOL posted;
@property (copy, nonatomic) NSDictionary *payload;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
