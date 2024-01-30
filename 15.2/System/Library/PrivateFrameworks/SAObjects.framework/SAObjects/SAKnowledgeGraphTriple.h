@class NSString;

@interface SAKnowledgeGraphTriple : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float confidence;
@property (copy, nonatomic) NSString *object;
@property (copy, nonatomic) NSString *predicate;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *subject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)graphTriple;
+ (id)graphTripleWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
