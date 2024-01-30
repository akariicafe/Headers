@class NSString;

@interface SBDodgingModifier : SBChainableModifier <SBDodgingQueryProviding, SBDodgingContextProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryProtocol;
+ (id)contextProtocol;
+ (id)newEventResponse;

- (id)loggingCategory;
- (id)handleRemovalEvent:(id)a0;
- (id)_handleEvent:(id)a0;
- (id)handleInsertionEvent:(id)a0;
- (id)handleCustomEvent:(id)a0;
- (id)handleAnimationCompletionEvent:(id)a0;
- (id)handlePreferenceChangeEvent:(id)a0;
- (id)handleRotationEvent:(id)a0;
- (BOOL)runsInternalVerificationAfterEventDispatch;

@end
