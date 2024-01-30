@class NSURL, NSString;

@interface SAMatchingSpan : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *domainObjectIdentifier;
@property (nonatomic) long long endIndex;
@property (nonatomic) long long startIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)matchingSpan;
+ (id)matchingSpanWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
