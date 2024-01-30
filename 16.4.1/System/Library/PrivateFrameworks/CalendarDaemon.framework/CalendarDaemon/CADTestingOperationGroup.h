@interface CADTestingOperationGroup : CADOperationGroup <CADTestingInterface>

+ (BOOL)requiresEventAccess;

- (BOOL)accessGranted;
- (void)CADTestingSimulateDaemonCrash;
- (void)CADTestingCloseDatabase:(id /* block */)a0;

@end
