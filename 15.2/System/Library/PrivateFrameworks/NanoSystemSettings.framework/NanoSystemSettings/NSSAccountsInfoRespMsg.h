@class NSData, NSMutableArray;

@interface NSSAccountsInfoRespMsg : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *accounts;
@property (readonly, nonatomic) BOOL hasWatchAKDevice;
@property (retain, nonatomic) NSData *watchAKDevice;

+ (Class)accountType;

- (void)addAccount:(id)a0;
- (id)accountAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (unsigned long long)accountsCount;
- (void)clearAccounts;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
