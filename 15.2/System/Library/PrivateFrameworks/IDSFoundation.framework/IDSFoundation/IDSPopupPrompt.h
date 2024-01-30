@class NSString;

@interface IDSPopupPrompt : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;

- (id)initWithTitle:(id)a0 promptMessage:(id)a1;
- (void)launchPromptWithButton:(id)a0 defaultUrl:(id)a1 alternateButton:(id)a2 alternateUrl:(id)a3;
- (void).cxx_destruct;

@end
