@class NSString;

@interface WFAskForInputIntentHandler : NSObject <WFAskForInputIntentHandling>

@property (nonatomic) BOOL resolvedValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleAskForInput:(id)a0 completion:(id /* block */)a1;
- (void)resolveDateAndTimeAnswerForAskForInput:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveDateAnswerForAskForInput:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveDefaultURLAnswerForAskForInput:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveNumberAnswerForAskForInput:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveQuestionForAskForInput:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveStringAnswerForAskForInput:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTimeAnswerForAskForInput:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTypeForAskForInput:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveUrlAnswerForAskForInput:(id)a0 withCompletion:(id /* block */)a1;

@end
