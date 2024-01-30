@class NSArray, SAUINanoImageResource, SAUIDecoratedText, NSString;

@interface SASTTableRowItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *columnValues;
@property (retain, nonatomic) SAUINanoImageResource *imageResource;
@property (retain, nonatomic) SAUIDecoratedText *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableRowItem;
+ (id)tableRowItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
