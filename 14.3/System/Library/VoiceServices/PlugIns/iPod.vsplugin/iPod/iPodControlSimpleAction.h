@interface iPodControlSimpleAction : VSRecognitionAction

- (id)perform;
- (int)completionType;
- (id)performSimpleAction;
- (void)_completeThreadedPerform:(id)a0;
- (BOOL)requiresThreadedPerform;
- (void)_performThreaded;

@end
