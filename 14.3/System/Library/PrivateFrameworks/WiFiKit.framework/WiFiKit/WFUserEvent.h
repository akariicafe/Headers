@class NSString, PBCodable;

@interface WFUserEvent : NSObject <WFAWDEvent>

@property (nonatomic) unsigned int metricIdentifier;
@property (retain, nonatomic) PBCodable *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithType:(long long)a0;
+ (id)eventWithType:(long long)a0 state:(BOOL)a1;
+ (id)eventWithType:(long long)a0 stateEnum:(unsigned int)a1;

- (void).cxx_destruct;
- (unsigned int)_metricIdForType:(long long)a0;
- (id)initWithType:(long long)a0 state:(BOOL)a1 stateEnum:(unsigned int)a2;

@end
