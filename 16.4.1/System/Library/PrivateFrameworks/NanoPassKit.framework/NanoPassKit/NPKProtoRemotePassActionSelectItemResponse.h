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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsResult:(id)a0;
- (id)resultAsString:(int)a0;

@end
