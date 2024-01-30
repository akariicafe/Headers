@interface ATXBMStoreEvent : NSObject <ATXBMStoreEventProtocol>

@property (readonly, nonatomic) id eventBody;
@property (readonly, nonatomic) double timestamp;

- (id)initWithEventBody:(id)a0 timestamp:(double)a1;
- (void).cxx_destruct;

@end
