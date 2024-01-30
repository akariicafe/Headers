@class NSString, NSArray;

@interface _INPBIntentSlotVocabularyConcept : PBCodable <_INPBIntentSlotVocabularyConcept, NSSecureCoding, NSCopying> {
    struct { unsigned char requiresUserIdentification : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL requiresUserIdentification;
@property (nonatomic) BOOL hasRequiresUserIdentification;
@property (copy, nonatomic) NSArray *synonyms;
@property (readonly, nonatomic) unsigned long long synonymsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)synonymsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearSynonyms;
- (void)addSynonyms:(id)a0;
- (id)synonymsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
