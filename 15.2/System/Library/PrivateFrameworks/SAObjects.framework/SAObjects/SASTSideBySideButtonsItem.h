@class NSString, SAUIColor;
@protocol SASTTemplateAction;

@interface SASTSideBySideButtonsItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *buttonsViewStyle;
@property (retain, nonatomic) id<SASTTemplateAction> primaryButtonAction;
@property (nonatomic) BOOL primaryButtonEnabled;
@property (copy, nonatomic) NSString *primaryButtonLabel;
@property (retain, nonatomic) SAUIColor *primaryButtonTextColor;
@property (retain, nonatomic) id<SASTTemplateAction> secondaryButtonAction;
@property (nonatomic) BOOL secondaryButtonEnabled;
@property (copy, nonatomic) NSString *secondaryButtonLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sideBySideButtonsItem;
+ (id)sideBySideButtonsItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
