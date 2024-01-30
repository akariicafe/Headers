@class NSString;
@protocol SAIntentGroupCustomVocabularyEntity;

@interface SAAppCustomVocabulary : SADomainObject

@property (copy, nonatomic) NSString *intentSlotValue;
@property (retain, nonatomic) id<SAIntentGroupCustomVocabularyEntity> vocabularyEntity;
@property (copy, nonatomic) NSString *vocabularyIdentifier;

+ (id)appCustomVocabulary;
+ (id)appCustomVocabularyWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
