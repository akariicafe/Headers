@class NSString;
@protocol ATXStableContactRepresentationProviderProtocol;

@interface ATXInteractionEventProvider : NSObject <ATXModeEntityEventProviderProtocol> {
    id<ATXStableContactRepresentationProviderProtocol> _stableContactRepresentationProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)aggregationEventsFromEvent:(id)a0;
- (id)biomePublisherWithBookmark:(id)a0;
- (id)contactEntityFromEvent:(id)a0;
- (id)contactEntityFromInstantMessagingInteraction:(id)a0;
- (id)dateIntervalFromEvent:(id)a0;
- (id)eventsFromPublisher;
- (BOOL)isEventFromProvider:(id)a0;
- (BOOL)publisherIsCoreDuetWrapper;
- (void)updateEntitySpecificFeaturesDict:(id)a0 aggregationEvent:(id)a1 isLocalToMode:(BOOL)a2;

@end
