@class NSString;

@interface CPLSettingFeedbackMessage : CPLFeedbackMessage

@property (readonly, nonatomic) NSString *settingName;
@property (readonly, nonatomic) NSString *value;

+ (id)feedbackType;

- (void).cxx_destruct;
- (id)serverMessage;
- (id)initWithSetting:(id)a0 value:(id)a1 libraryIdentifier:(id)a2;

@end
