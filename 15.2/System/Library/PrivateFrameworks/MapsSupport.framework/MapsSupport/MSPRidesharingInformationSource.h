@class NSString, GEOComposedWaypoint;

@interface MSPRidesharingInformationSource : NSObject <MSPRouteInformationSource>

@property (readonly, nonatomic, getter=_startWaypoint) GEOComposedWaypoint *startWaypoint;
@property (readonly, nonatomic, getter=_endWaypoint) GEOComposedWaypoint *endWaypoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
