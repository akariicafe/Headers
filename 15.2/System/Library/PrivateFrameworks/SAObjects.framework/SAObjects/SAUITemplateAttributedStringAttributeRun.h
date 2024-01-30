@class NSDictionary, SAUITemplateRange, NSString;

@interface SAUITemplateAttributedStringAttributeRun : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) SAUITemplateRange *range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributedStringAttributeRun;
+ (id)attributedStringAttributeRunWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
