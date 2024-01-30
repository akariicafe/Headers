@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBSetMessageAttributeIntent : PBCodable <_INPBSetMessageAttributeIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char attribute : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int attribute;
@property (nonatomic) BOOL hasAttribute;
@property (copy, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic) unsigned long long identifiersCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)identifierAtIndex:(unsigned long long)a0;
- (void)clearIdentifiers;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addIdentifier:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeAsString:(int)a0;
- (int)StringAsAttribute:(id)a0;
- (id)dictionaryRepresentation;

@end
