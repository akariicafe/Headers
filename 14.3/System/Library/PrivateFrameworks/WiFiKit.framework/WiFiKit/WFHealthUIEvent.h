@class NSString, PBCodable;

@interface WFHealthUIEvent : NSObject <WFAWDEvent>

@property (nonatomic) unsigned int metricIdentifier;
@property (retain, nonatomic) PBCodable *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subtitleEventWithIssues:(id)a0 ssid:(id)a1;
+ (id)tapLinkEventWithIssues:(id)a0 ssid:(id)a1;
+ (id)detailEventWithIssues:(id)a0 ssid:(id)a1;

- (void).cxx_destruct;
- (id)initWithEventType:(long long)a0 issues:(id)a1 ssid:(id)a2;

@end
