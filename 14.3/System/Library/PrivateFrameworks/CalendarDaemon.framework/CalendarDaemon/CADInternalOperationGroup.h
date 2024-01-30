@class NSString;

@interface CADInternalOperationGroup : CADOperationGroup <CADInternalInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;

- (BOOL)accessGrantedToPerformSelector:(SEL)a0;
- (void)CADInternalForceStatCollection:(id /* block */)a0;
- (BOOL)_internalAccessGranted;

@end
