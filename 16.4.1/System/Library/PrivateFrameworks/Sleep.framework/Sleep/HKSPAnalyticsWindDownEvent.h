@class NSString, NSDictionary, NSArray;

@interface HKSPAnalyticsWindDownEvent : NSObject <HKSPAnalyticsEvent>

@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *eventPayload;
@property (readonly, nonatomic) NSArray *keysRequiringIHAGating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_payloadValueForWindDownAction:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithWindDownEventData:(id)a0 watchProductType:(id)a1 weeksSinceOnboarded:(id)a2;

@end
