@interface iPodControlSimpleAction : VSRecognitionAction

- (id)perform;
- (int)completionType;
- (BOOL)requiresThreadedPerform;
- (id)performSimpleAction;
- (void)_performThreaded;
- (void)_completeThreadedPerform:(id)a0;

@end
