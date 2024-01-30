@class NSArray, NSString;

@interface _INPBIntentVocabulary : PBCodable <_INPBIntentVocabulary, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *intentSlotVocabularyPolicies;
@property (readonly, nonatomic) unsigned long long intentSlotVocabularyPoliciesCount;
@property (copy, nonatomic) NSArray *intentTypePhrases;
@property (readonly, nonatomic) unsigned long long intentTypePhrasesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)intentSlotVocabularyPoliciesType;
+ (Class)intentTypePhrasesType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addIntentSlotVocabularyPolicies:(id)a0;
- (void)addIntentTypePhrases:(id)a0;
- (void)clearIntentSlotVocabularyPolicies;
- (void)clearIntentTypePhrases;
- (id)intentSlotVocabularyPoliciesAtIndex:(unsigned long long)a0;
- (id)intentTypePhrasesAtIndex:(unsigned long long)a0;

@end
