@class NSString, SAUIColor;
@protocol SASTTemplateAction;

@interface SASTCountdownTimerItem : AceObject <SASTActionableTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<SASTTemplateAction> action;
@property (nonatomic) long long actionDelayInSeconds;
@property (retain, nonatomic) SAUIColor *bodyBackgroundColor;
@property (retain, nonatomic) SAUIColor *countdownTextColor;
@property (retain, nonatomic) SAUIColor *headerBackgroundColor;
@property (copy, nonatomic) NSString *headerText;
@property (retain, nonatomic) SAUIColor *headerTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)countdownTimerItem;
+ (id)countdownTimerItemWithDictionary:(id)a0 context:(id)a1;

@end
