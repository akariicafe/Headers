@class SAUIDecoratedText, SAUINanoImageResource, NSString;

@interface SASTAncillaryImageItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAUINanoImageResource *imageResource;
@property (retain, nonatomic) SAUIDecoratedText *subtitle;
@property (retain, nonatomic) SAUIDecoratedText *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ancillaryImageItem;
+ (id)ancillaryImageItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
