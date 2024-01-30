@class NSString, NSData;

@interface NPKProtoRemotePassActionSelectItemResponse : PBCodable <NSCopying> {
    struct { unsigned char incrementAmount : 1; } _has;
}

@property (retain, nonatomic) NSString *requestUniqueID;
@property (nonatomic) int result;
@property (readonly, nonatomic) BOOL hasIncrementCurrency;
@property (retain, nonatomic) NSString *incrementCurrency;
@property (nonatomic) BOOL hasIncrementAmount;
@property (nonatomic) long long incrementAmount;
@property (readonly, nonatomic) BOOL hasServiceProviderDataData;
@property (retain, nonatomic) NSData *serviceProviderDataData;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resultAsString:(int)a0;
- (int)StringAsResult:(id)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
