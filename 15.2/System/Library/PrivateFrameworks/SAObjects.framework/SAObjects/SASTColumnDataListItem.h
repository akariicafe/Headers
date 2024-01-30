@class NSArray, SAUINanoImageResource, NSString, SAUIDecoratedText;
@protocol SASTTemplateAction;

@interface SASTColumnDataListItem : AceObject <SASTActionableTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<SASTTemplateAction> action;
@property (copy, nonatomic) NSArray *decoratedRows;
@property (retain, nonatomic) SAUINanoImageResource *imageResource;
@property (copy, nonatomic) NSString *rowLayout;
@property (retain, nonatomic) SAUIDecoratedText *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columnDataListItem;
+ (id)columnDataListItemWithDictionary:(id)a0 context:(id)a1;

@end
