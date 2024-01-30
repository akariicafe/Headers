@class NSArray, NSString;

@interface SAAnswerDefinitionGroup : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *definitionEntries;
@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSString *partOfSpeech;
@property (copy, nonatomic) NSArray *synonyms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definitionGroup;
+ (id)definitionGroupWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
