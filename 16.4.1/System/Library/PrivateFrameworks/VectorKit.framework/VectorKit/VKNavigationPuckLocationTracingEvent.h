@class NSUUID;

@interface VKNavigationPuckLocationTracingEvent : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSUUID *locationUUID;

- (void).cxx_destruct;
- (id)initWithEventType:(long long)a0 timestamp:(double)a1 locationUUID:(id)a2;

@end
