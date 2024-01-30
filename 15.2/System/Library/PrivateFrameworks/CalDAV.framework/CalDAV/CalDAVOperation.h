@class NSMutableSet;
@protocol CalDAVPrincipal;

@interface CalDAVOperation : CoreDAVTaskGroup {
    BOOL _isCancellingTaskGroups;
}

@property (retain, nonatomic) id<CalDAVPrincipal> principal;
@property (retain, nonatomic) NSMutableSet *outstandingTaskGroups;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPrincipal:(id)a0;
- (void)dealloc;
- (void)cancelTaskGroup;
- (void)bailWithError:(id)a0;
- (void)_tearDownAllTaskGroupsWithBlock:(id /* block */)a0;

@end
