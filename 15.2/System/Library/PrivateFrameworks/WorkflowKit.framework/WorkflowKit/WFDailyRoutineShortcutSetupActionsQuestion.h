@class NSArray, NSString, WFImage, WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion;

@interface WFDailyRoutineShortcutSetupActionsQuestion : WFDailyRoutineShortcutSetupQuestion

@property (readonly, copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *addButtonTitle;
@property (copy, nonatomic) NSString *skipButtonTitle;
@property (retain, nonatomic) WFImage *icon;
@property (retain, nonatomic) WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion *followUpQuestion;

- (void).cxx_destruct;
- (id)initWithPrompt:(id)a0 subtitle:(id)a1 actions:(id)a2;

@end
