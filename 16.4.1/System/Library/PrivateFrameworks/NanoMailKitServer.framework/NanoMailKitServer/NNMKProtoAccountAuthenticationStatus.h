@class NSMutableArray;

@interface NNMKProtoAccountAuthenticationStatus : PBCodable <NSCopying> {
    struct { unsigned char requestTime : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *accountsStatus;
@property (nonatomic) BOOL hasRequestTime;
@property (nonatomic) double requestTime;

+ (Class)accountsStatusType;

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
- (id)accountsStatusAtIndex:(unsigned long long)a0;
- (unsigned long long)accountsStatusCount;
- (void)addAccountsStatus:(id)a0;
- (void)clearAccountsStatus;

@end
