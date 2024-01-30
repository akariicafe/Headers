@class NSString, SASyncAnchor;

@interface SASyncGroupChecksum : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *domainObjectClass;
@property (copy, nonatomic) NSString *identifierChecksum;
@property (retain, nonatomic) SASyncAnchor *syncAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupChecksum;
+ (id)groupChecksumWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
