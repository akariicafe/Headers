@class NSArray, NSString, SASTItemGroup;

@interface SASTViewTemplateAction : AceObject <SASTTemplateAction>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *commands;
@property (retain, nonatomic) SASTItemGroup *itemGroupView;
@property (copy, nonatomic) NSString *viewTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewTemplateAction;
+ (id)viewTemplateActionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
