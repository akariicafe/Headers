@class NSString;

@interface CADErrorOperationGroup : CADOperationGroup <CADErrorInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresEventAccess;

- (void)CADDatabaseGetEventsWithErrorsPerSource:(id /* block */)a0;
- (void)CADDatabaseGetErrorCount:(id /* block */)a0;

@end
