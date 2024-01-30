@interface FBSceneEventQueue : BSEventQueue

- (void)_noteWillPendEvents:(id)a0 atPosition:(int)a1;
- (void)_noteQueueDidUnlock;
- (void)_noteWillExecuteEvent:(id)a0;
- (void)_noteQueueDidDrain;

@end
