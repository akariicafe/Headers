@class NSString;

@interface INDoubleResolutionResult : INIntentResolutionResult <INDoubleResolutionResultExport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)confirmationRequiredWithValueToConfirm:(id)a0;
+ (id)successWithResolvedValue:(double)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
