@class NSURL, NSString, SAUIDecoratedText;

@interface SASTMessageItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *audioMessageURL;
@property (copy, nonatomic) NSString *bundleId;
@property (retain, nonatomic) SAUIDecoratedText *content;
@property (retain, nonatomic) SAUIDecoratedText *recipient;
@property (copy, nonatomic) NSString *serviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageItem;
+ (id)messageItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
