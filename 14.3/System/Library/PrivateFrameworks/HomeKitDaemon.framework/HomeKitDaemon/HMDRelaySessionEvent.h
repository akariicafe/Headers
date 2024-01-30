@class NSString;

@interface HMDRelaySessionEvent : HMDLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long actionType;
@property (nonatomic) long long statusCode;

+ (void)initialize;
+ (id)uuid;
+ (id)stringForActionType:(unsigned long long)a0;
+ (id)relaySessionEventWithActionType:(unsigned long long)a0;

- (id)initWithActionType:(unsigned long long)a0;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
