@class NSString;

@interface CADInternalOperationGroup : CADOperationGroup <CADInternalInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;
+ (BOOL)requiresEventOrReminderAccess;

- (BOOL)accessGrantedToPerformSelector:(SEL)a0;
- (BOOL)_internalAccessGranted;
- (void)CADInternalForceStatCollection:(id /* block */)a0;

@end
