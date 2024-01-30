@class NSString, NSArray, WFSmartPromptButton, INFile;

@interface WFSmartPromptIntent : INIntent

@property (copy, nonatomic) NSString *promptMessage;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) WFSmartPromptButton *selectedButton;
@property (copy, nonatomic) NSString *privacyTitle;
@property (copy, nonatomic) INFile *privacyIcon;

@end
