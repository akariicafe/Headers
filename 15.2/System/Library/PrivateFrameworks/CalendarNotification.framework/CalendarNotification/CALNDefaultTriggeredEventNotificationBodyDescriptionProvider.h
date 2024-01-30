@class NSString;
@protocol CALNTravelAdvisoryDescriptionGenerator, CalDateProvider;

@interface CALNDefaultTriggeredEventNotificationBodyDescriptionProvider : NSObject <CALNTriggeredEventNotificationBodyDescriptionProvider>

@property (readonly, nonatomic) id<CALNTravelAdvisoryDescriptionGenerator> travelAdvisoryDescriptionGenerator;
@property (readonly, nonatomic) id<CalDateProvider> dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_ttlDescriptionTypeNumberForTravelAdvisoryTimelinessPeriod:(unsigned long long)a0;
- (id)bodyForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1 bodyContainsTravelAdvice:(BOOL *)a2;
- (id)initWithTravelAdvisoryDescriptionGenerator:(id)a0 dateProvider:(id)a1;
- (id)_bodyWithTravelAdvisoryForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1;
- (id)_bodyWithoutTravelAdvisoryForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1;
- (void).cxx_destruct;

@end
