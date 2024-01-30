@interface INAddTasksTargetTaskListResolutionResult : INTaskListResolutionResult

+ (id)confirmationRequiredWithTaskListToConfirm:(id)a0 forReason:(long long)a1;

- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)a0;
- (id)_initWithIntentSlotResolutionResult:(id)a0 slotDescription:(id)a1;
- (id)initWithTaskListResolutionResult:(id)a0;

@end
