@class NSString;

@interface WFAskForInputAction : WFHandleCustomIntentAction

@property (readonly, nonatomic) NSString *inputType;
@property (readonly, nonatomic) NSString *promptText;
@property (readonly, nonatomic) NSString *defaultAnswer;
@property (readonly, nonatomic) long long datePickerMode;
@property (readonly, nonatomic) BOOL immediatelyActivateWatchDictation;

- (void)runAsynchronouslyWithInput:(id)a0;
- (id)outputContentClasses;
- (void)getOutputFromIntentResponse:(id)a0 completionHandler:(id /* block */)a1;
- (id)appResource;
- (id)datePickerModeFromInputType:(id)a0;
- (void)finishRunningWithResultText:(id)a0;
- (void)finishRunningWithDate:(id)a0;

@end
