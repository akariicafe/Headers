@class NSArray, NSString, INIntent;

@interface INIntentResolutionResult : NSObject <INIntentResolutionResultExport, INIntentResolutionResultDataProviding>

@property (nonatomic) long long resolutionResultCode;
@property (retain, nonatomic) NSArray *disambiguationItems;
@property (retain, nonatomic) NSArray *alternatives;
@property (retain, nonatomic) id resolvedValue;
@property (retain, nonatomic) id itemToConfirm;
@property (nonatomic) unsigned long long unsupportedReason;
@property (nonatomic) unsigned long long confirmationReason;
@property (retain, nonatomic) INIntent *intentToExecute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dataForResolutionMethodUnimplemented;
+ (id)_resolutionResultWithData:(id)a0 slotDescription:(id)a1;
+ (id)confirmationRequiredWithItemToConfirm:(id)a0 forReason:(long long)a1;
+ (id)needsValue;
+ (id)notRequired;
+ (id)requiresExecutionOfIntent:(id)a0;
+ (id)resolutionResultConfirmationRequiredWithItemToConfirm:(id)a0;
+ (id)resolutionResultDisambiguationWithItemsToDisambiguate:(id)a0;
+ (id)resolutionResultNeedsValue;
+ (id)resolutionResultNotRequired;
+ (id)resolutionResultSuccessWithResolvedValue:(id)a0;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)a0;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)a0 alternativeItems:(id)a1;
+ (id)unsupported;
+ (id)unsupportedWithReason:(long long)a0;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)_JSONDictionaryRepresentationForIntent:(id)a0 parameterName:(id)a1;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)a0;
- (id)_dataForIntentSlotDescription:(id)a0;
- (id)_initWithIntentSlotResolutionResult:(id)a0 slotDescription:(id)a1;
- (id)_initWithResolutionResult:(id)a0;
- (id)_initWithResultCode:(long long)a0;
- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_objectForIntentSlotValue:(id)a0 slotDescription:(id)a1;
- (id)_stringForResultCode:(long long)a0;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;
- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;
- (id)resolutionResultDataForIntent:(id)a0 intentSlotDescription:(id)a1 error:(id *)a2;
- (void)transformResolutionResultForIntent:(id)a0 intentSlotDescription:(id)a1 withOptionsProvider:(id)a2 completion:(id /* block */)a3;

@end
