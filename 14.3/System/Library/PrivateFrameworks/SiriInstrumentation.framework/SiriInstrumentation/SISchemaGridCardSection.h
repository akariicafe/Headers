@class NSArray, NSData;

@interface SISchemaGridCardSection : PBCodable {
    struct { unsigned char cardSource : 1; } _has;
}

@property (copy, nonatomic) NSArray *resultIdentifiers;
@property (nonatomic) int cardSource;
@property (nonatomic) BOOL hasCardSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addResultIdentifiers:(id)a0;
- (void)clearResultIdentifiers;
- (unsigned long long)resultIdentifiersCount;
- (id)resultIdentifiersAtIndex:(unsigned long long)a0;

@end
