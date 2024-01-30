@interface CADTestingOperationGroup : CADOperationGroup <CADTestingInterface>

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;

- (BOOL)accessGrantedToPerformSelector:(SEL)a0;
- (void)CADTestingSimulateDaemonCrash;
- (void)CADTestingCloseDatabase:(id /* block */)a0;

@end
