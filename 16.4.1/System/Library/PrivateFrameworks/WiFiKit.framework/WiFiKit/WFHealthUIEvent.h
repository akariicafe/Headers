@class NSString, PBCodable, NSDictionary;

@interface WFHealthUIEvent : NSObject <WFUIEvent>

@property (nonatomic) unsigned int metricIdentifier;
@property (retain, nonatomic) PBCodable *metric;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detailEventWithIssues:(id)a0 ssid:(id)a1 securityType:(long long)a2;
+ (id)noInternetEventWithTestTimes:(long long)a0 didPassTest:(BOOL)a1 failedVelocityTests:(id)a2 ssid:(id)a3;
+ (id)subtitleEventWithIssues:(id)a0 ssid:(id)a1 securityType:(long long)a2;
+ (id)tapLinkEventWithIssues:(id)a0 ssid:(id)a1 securityType:(long long)a2;

@end
