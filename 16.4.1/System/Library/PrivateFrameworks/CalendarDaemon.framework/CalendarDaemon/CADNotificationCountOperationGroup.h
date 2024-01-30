@class NSString;

@interface CADNotificationCountOperationGroup : CADOperationGroup <CADNotificationCountInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresEventAccess;

- (void)CADDatabaseGetNotificationCountExcludingUncheckedCalendars:(BOOL)a0 expanded:(BOOL)a1 reply:(id /* block */)a2;

@end
