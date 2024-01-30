@class NSString, SAUINanoImageResource;
@protocol SASTTemplateAction;

@interface SASTAttributionItem : AceObject <SASTActionableTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<SASTTemplateAction> action;
@property (copy, nonatomic) NSString *attributionPosition;
@property (retain, nonatomic) SAUINanoImageResource *imageResource;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributionItem;
+ (id)attributionItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
