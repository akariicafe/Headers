@class NSString, CADSyntheticRouteHypothesizerCache;

@interface CALNSyntheticRouteHypothesizerProvider : NSObject <CALNRouteHypothesizerProvider>

@property (class, readonly, nonatomic) CALNSyntheticRouteHypothesizerProvider *sharedInstance;

@property (readonly, nonatomic) CADSyntheticRouteHypothesizerCache *syntheticRouteHypothesizerCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removedRouteHypothesizerForEventExternalURL:(id)a0;
- (void)didDismissUINotification:(unsigned long long)a0 forPlannedDestination:(id)a1 dismissalType:(unsigned long long)a2;
- (void)createdRouteHypothesizer:(id)a0 forEventExternalURL:(id)a1;
- (id)hypothesizerForPlannedDestination:(id)a0;

@end
