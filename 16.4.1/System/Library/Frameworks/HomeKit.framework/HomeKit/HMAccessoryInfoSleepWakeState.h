@interface HMAccessoryInfoSleepWakeState : NSObject

@property (readonly) unsigned long long sleepWakeState;

- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)protoData;
- (id)description;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithSleepWakeState:(unsigned long long)a0;
- (id)protoPayload;

@end
