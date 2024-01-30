@class NSURL, NSString, NSNumber;

@interface SASPronunciationContext : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *domainObjectIdentifier;
@property (copy, nonatomic) NSString *domainObjectPropertyIdentifier;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSNumber *tokenOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pronunciationContext;
+ (id)pronunciationContextWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
