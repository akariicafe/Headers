@class NSString;

@interface CADCalendarToolOperationGroup : CADOperationGroup <CADCalendarToolInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresEventAccess;

- (BOOL)accessGranted;
- (void)CADPurgeChangeTrackingReply:(id /* block */)a0;
- (void)CADPostSyntheticRouteHypothesis:(id)a0 forEventWithExternalURL:(id)a1 reply:(id /* block */)a2;

@end
