@class NSString;

@interface WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion : NSObject

@property (readonly, copy, nonatomic) NSString *prompt;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSString *parameterKey;

- (void).cxx_destruct;
- (id)initWithPrompt:(id)a0 actionIdentifier:(id)a1 parameterKey:(id)a2;

@end
