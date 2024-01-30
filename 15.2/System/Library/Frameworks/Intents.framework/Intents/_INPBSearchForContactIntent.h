@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBSearchForContactIntent : PBCodable <_INPBSearchForContactIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *contactIdentifiers;
@property (readonly, nonatomic) unsigned long long contactIdentifiersCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)contactIdentifiersType;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)clearContactIdentifiers;
- (void)addContactIdentifiers:(id)a0;
- (id)contactIdentifiersAtIndex:(unsigned long long)a0;

@end
