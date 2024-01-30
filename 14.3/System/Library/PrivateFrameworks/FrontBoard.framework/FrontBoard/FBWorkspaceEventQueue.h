@interface FBWorkspaceEventQueue : BSEventQueue

+ (id)sharedInstance;

- (void)executeOrAppendEvent:(id)a0;
- (void)_noteQueueDidLock;
- (void)executeOrPrependEvent:(id)a0;
- (void)_noteWillPendEvents:(id)a0 atPosition:(int)a1;
- (void)_noteQueueDidUnlock;
- (BOOL)_shouldProcessEvent:(id)a0 enqueuedDuringExecutionOfEvent:(id)a1;
- (void)_noteWillExecuteEvent:(id)a0;
- (void)executeOrPrependEvents:(id)a0;
- (void)_noteWillCancelEventsWithName:(id)a0 count:(unsigned long long)a1;

@end
