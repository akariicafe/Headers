@class NSString, NSDictionary, NSDate;

@interface HFAnalyticsEvent : NSObject

@property (retain, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *payload;

- (id)initWithEventType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)description;

@end
