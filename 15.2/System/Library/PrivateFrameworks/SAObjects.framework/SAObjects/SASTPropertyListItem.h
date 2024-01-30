@class NSString, SAUIDecoratedText, NSArray, SAUINanoImageResource;

@interface SASTPropertyListItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *alignment;
@property (retain, nonatomic) SAUIDecoratedText *decoratedTitle;
@property (copy, nonatomic) NSArray *decoratedValues;
@property (retain, nonatomic) SAUINanoImageResource *imageResource;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyListItem;
+ (id)propertyListItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
