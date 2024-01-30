@class NSArray, NSString;

@interface _INPBIntentSlotVocabularyValue : PBCodable <_INPBIntentSlotVocabularyValue, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *examples;
@property (readonly, nonatomic) unsigned long long examplesCount;
@property (copy, nonatomic) NSString *phrase;
@property (readonly, nonatomic) BOOL hasPhrase;
@property (copy, nonatomic) NSString *pronunciation;
@property (readonly, nonatomic) BOOL hasPronunciation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clearExamples;
- (void)addExamples:(id)a0;
- (id)examplesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
