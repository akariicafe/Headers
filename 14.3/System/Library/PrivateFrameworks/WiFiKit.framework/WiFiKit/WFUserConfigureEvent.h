@class NSString, PBCodable;

@interface WFUserConfigureEvent : NSObject <WFAWDEvent>

@property (nonatomic) unsigned int metricIdentifier;
@property (retain, nonatomic) PBCodable *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configureEventWithType:(long long)a0 new:(long long)a1 old:(long long)a2;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 new:(long long)a1 old:(long long)a2;
- (unsigned int)_metricIdForType:(long long)a0;

@end
