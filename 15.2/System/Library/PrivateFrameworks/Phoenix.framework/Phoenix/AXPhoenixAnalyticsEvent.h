@class NSDictionary;

@interface AXPhoenixAnalyticsEvent : NSObject

@property (nonatomic) long long eventType;
@property (retain, nonatomic) NSDictionary *eventInfo;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEventType:(long long)a0 eventInfo:(id)a1;
- (id)_jsonData;

@end
