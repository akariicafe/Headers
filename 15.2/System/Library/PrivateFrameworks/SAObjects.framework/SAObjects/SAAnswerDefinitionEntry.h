@class NSString, NSArray;

@interface SAAnswerDefinitionEntry : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *definition;
@property (copy, nonatomic) NSArray *examples;
@property (copy, nonatomic) NSArray *variations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definitionEntry;
+ (id)definitionEntryWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
