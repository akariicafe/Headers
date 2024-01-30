@class NSString, PBCodable, NSDictionary;

@interface WFUserConfigureEvent : NSObject <WFUIEvent>

@property (nonatomic) unsigned int metricIdentifier;
@property (retain, nonatomic) PBCodable *metric;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configureEventWithType:(long long)a0 new:(long long)a1 old:(long long)a2;

- (void).cxx_destruct;
- (id)_configureValueStringForType:(long long)a0;
- (id)_eventTypeStringForType:(long long)a0;
- (unsigned int)_metricIdForType:(long long)a0;
- (id)initWithType:(long long)a0 new:(long long)a1 old:(long long)a2;

@end
