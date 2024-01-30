@class NSString, NSData;

@interface SISchemaCasinoRelationship : PBCodable {
    struct { unsigned char casinoFromType : 1; } _has;
}

@property (copy, nonatomic) NSString *viewIDFrom;
@property (nonatomic) BOOL hasViewIDFrom;
@property (copy, nonatomic) NSString *viewIDTo;
@property (nonatomic) BOOL hasViewIDTo;
@property (nonatomic) int casinoFromType;
@property (nonatomic) BOOL hasCasinoFromType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
