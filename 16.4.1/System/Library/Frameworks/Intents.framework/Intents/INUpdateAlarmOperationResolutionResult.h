@interface INUpdateAlarmOperationResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithUpdateAlarmOperationToConfirm:(long long)a0;
+ (id)successWithResolvedUpdateAlarmOperation:(long long)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;
- (void)transformResolutionResultForIntent:(id)a0 intentSlotDescription:(id)a1 withOptionsProvider:(id)a2 completion:(id /* block */)a3;

@end
