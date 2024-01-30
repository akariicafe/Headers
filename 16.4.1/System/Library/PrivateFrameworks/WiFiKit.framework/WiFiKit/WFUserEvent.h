@class NSString, PBCodable, NSDictionary;

@interface WFUserEvent : NSObject <WFUIEvent>

@property (nonatomic) unsigned int metricIdentifier;
@property (retain, nonatomic) PBCodable *metric;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithType:(long long)a0;
+ (id)eventWithType:(long long)a0 state:(BOOL)a1;
+ (id)eventWithType:(long long)a0 stateEnum:(unsigned int)a1;

@end
