@class NSString, NSMutableSet, NSRunLoop;

@interface DACoreDAVTaskManager : DATaskManager <CoreDAVTaskManager> {
    NSMutableSet *_applicationsShowingActivity;
}

@property (retain, nonatomic) NSRunLoop *workRunLoop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)taskManagerDidAddTask:(id)a0;
- (void)taskManagerWillRemoveTask:(id)a0;
- (void)submitIndependentCoreDAVTask:(id)a0;
- (void)_updateSpinner:(BOOL)a0;
- (void)submitQueuedCoreDAVTask:(id)a0;
- (void)coreDAVTaskRequestModal:(id)a0;
- (void)coreDAVTaskEndModal:(id)a0;
- (void)coreDAVTaskDidFinish:(id)a0;

@end
