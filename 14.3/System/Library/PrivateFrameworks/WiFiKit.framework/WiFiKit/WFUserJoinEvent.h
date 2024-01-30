@class NSString, PBCodable;

@interface WFUserJoinEvent : NSObject <WFAWDEvent>

@property (nonatomic) unsigned int metricIdentifier;
@property (retain, nonatomic) PBCodable *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)joinEventWithSecurity:(long long)a0 error:(long long)a1 sectionCounts:(id)a2 sectionName:(id)a3;
+ (id)joinEventWithType:(long long)a0 security:(long long)a1 error:(long long)a2;

@end
