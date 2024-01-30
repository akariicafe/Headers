@class NSString;

@interface SAIntentGroupCustomVocabularyPerson : AceObject <SAIntentGroupCustomVocabularyEntity>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *relationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customVocabularyPerson;
+ (id)customVocabularyPersonWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
