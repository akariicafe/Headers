@class NSString, NSObject, GEONavigationListener;
@protocol OS_dispatch_semaphore;

@interface PPQuickTypeNavigationServant : NSObject <PPQuickTypeServantProtocol, GEONavigationListenerDelegate> {
    GEONavigationListener *_navigationListener;
    int _navigationState;
    NSString *_destinationName;
    NSString *_streetName;
    double _remainingTimeToDestination;
    double _remainingDistanceToDestination;
    NSObject<OS_dispatch_semaphore> *_stateSemaphore;
    NSObject<OS_dispatch_semaphore> *_streetSemaphore;
    NSObject<OS_dispatch_semaphore> *_summarySemaphore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationListener:(id)a0 didUpdateRouteSummary:(id)a1;
- (void)navigationListener:(id)a0 didUpdateCurrentRoadName:(id)a1;
- (void)dealloc;
- (void)navigationListener:(id)a0 didUpdatePositionFromDestination:(struct { double x0; double x1; })a1;
- (id)init;
- (id)quickTypeItemsWithQuery:(id)a0 limit:(unsigned long long)a1 explanationSet:(id)a2;
- (void)navigationListener:(id)a0 didUpdateGuidanceState:(id)a1;
- (void).cxx_destruct;

@end
