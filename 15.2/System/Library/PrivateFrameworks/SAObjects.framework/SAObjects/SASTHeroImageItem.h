@class NSString, SAUINanoImageResource, SADecoratedString;

@interface SASTHeroImageItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SADecoratedString *caption;
@property (copy, nonatomic) NSString *position;
@property (retain, nonatomic) SAUINanoImageResource *watchImageResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)heroImageItem;
+ (id)heroImageItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
