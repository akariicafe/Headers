@class SAUIDecoratedText, SAUILocalImageResource, NSString;
@protocol SASTTemplateAction;

@interface SASTButtonItem : AceObject <SASTActionableTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<SASTTemplateAction> action;
@property (nonatomic) BOOL centered;
@property (retain, nonatomic) SAUIDecoratedText *decoratedLabel;
@property (retain, nonatomic) SAUILocalImageResource *localImageResource;
@property (copy, nonatomic) NSString *position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonItem;
+ (id)buttonItemWithDictionary:(id)a0 context:(id)a1;

@end
