@class NSMutableArray;

@interface NNMKProtoAccountAuthenticationStatus : PBCodable <NSCopying> {
    struct { unsigned char requestTime : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *accountsStatus;
@property (nonatomic) BOOL hasRequestTime;
@property (nonatomic) double requestTime;

+ (Class)accountsStatusType;

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
- (void)addAccountsStatus:(id)a0;
- (unsigned long long)accountsStatusCount;
- (void)clearAccountsStatus;
- (id)accountsStatusAtIndex:(unsigned long long)a0;

@end
