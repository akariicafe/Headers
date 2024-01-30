@class NSArray, NSString, _INPBIntentType;

@interface _INPBIntentTypePhrases : PBCodable <_INPBIntentTypePhrases, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentType *intentType;
@property (readonly, nonatomic) BOOL hasIntentType;
@property (copy, nonatomic) NSArray *intentVocabularyExamples;
@property (readonly, nonatomic) unsigned long long intentVocabularyExamplesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addIntentVocabularyExamples:(id)a0;
- (void)clearIntentVocabularyExamples;
- (id)intentVocabularyExamplesAtIndex:(unsigned long long)a0;

@end
