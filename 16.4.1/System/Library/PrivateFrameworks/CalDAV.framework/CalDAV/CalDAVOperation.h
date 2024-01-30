@class NSMutableSet;
@protocol CalDAVPrincipal;

@interface CalDAVOperation : CoreDAVTaskGroup {
    BOOL _isCancellingTaskGroups;
}

@property (retain, nonatomic) id<CalDAVPrincipal> principal;
@property (retain, nonatomic) NSMutableSet *outstandingTaskGroups;

- (id)initWithPrincipal:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancelTaskGroup;
- (void)bailWithError:(id)a0;
- (void)_tearDownAllTaskGroupsWithBlock:(id /* block */)a0;

@end
