@class NSMutableArray;

@interface NPKProtoRemoveExpressPassesWithCardTypeResponse : PBCodable <NSCopying> {
    struct { unsigned char pending : 1; unsigned char success : 1; } _has;
}

@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSMutableArray *actualExpressPassInformations;

+ (Class)actualExpressPassInformationType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addActualExpressPassInformation:(id)a0;
- (unsigned long long)actualExpressPassInformationsCount;
- (void)clearActualExpressPassInformations;
- (id)actualExpressPassInformationAtIndex:(unsigned long long)a0;

@end
