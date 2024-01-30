@class NSData, NSMutableArray;

@interface NPKProtoRemoveExpressPassWithUniqueIdentifierResponse : PBCodable <NSCopying> {
    struct { unsigned char pending : 1; unsigned char success : 1; } _has;
}

@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (readonly, nonatomic) BOOL hasActualExpressPassInformation;
@property (retain, nonatomic) NSData *actualExpressPassInformation;
@property (retain, nonatomic) NSMutableArray *currentExpressPassesInformations;

+ (Class)currentExpressPassesInformationType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addCurrentExpressPassesInformation:(id)a0;
- (unsigned long long)currentExpressPassesInformationsCount;
- (void)clearCurrentExpressPassesInformations;
- (id)currentExpressPassesInformationAtIndex:(unsigned long long)a0;

@end
