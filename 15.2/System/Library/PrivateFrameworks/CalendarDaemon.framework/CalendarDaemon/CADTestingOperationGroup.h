@interface CADTestingOperationGroup : CADOperationGroup <CADTestingInterface>

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;
+ (BOOL)requiresEventOrReminderAccess;

- (BOOL)accessGrantedToPerformSelector:(SEL)a0;
- (void)CADTestingSimulateDaemonCrash;
- (void)CADTestingCloseDatabase:(id /* block */)a0;

@end
