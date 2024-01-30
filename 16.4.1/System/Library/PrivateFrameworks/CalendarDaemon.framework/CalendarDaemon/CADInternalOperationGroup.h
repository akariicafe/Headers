@class NSString;

@interface CADInternalOperationGroup : CADOperationGroup <CADInternalInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresEventAccess;

- (BOOL)_internalAccessGranted;
- (void)CADInternalRemoveConferenceLinkRenewalDate:(id /* block */)a0;
- (BOOL)accessGranted;
- (void)CADInternalSetNextConferenceLinkRenewalToNow:(id /* block */)a0;
- (void)CADInternalForceStatCollection:(id /* block */)a0;

@end
