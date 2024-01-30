@class NSString;

@interface ATXAppLaunchEventProvider : NSObject <ATXModeEntityEventProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)biomePublisherWithBookmark:(id)a0;
- (id)aggregationEventsFromEvent:(id)a0;
- (BOOL)isEventFromProvider:(id)a0;
- (BOOL)publisherIsCoreDuetWrapper;
- (id)dateIntervalFromEvent:(id)a0;
- (id)eventsFromPublisher;
- (void)updateEntitySpecificFeaturesDict:(id)a0 aggregationEvent:(id)a1 isLocalToMode:(BOOL)a2;

@end
