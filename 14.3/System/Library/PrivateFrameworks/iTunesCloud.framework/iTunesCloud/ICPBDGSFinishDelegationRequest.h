@class NSMutableArray;

@interface ICPBDGSFinishDelegationRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *playerDelegateInfoTokens;

+ (Class)playerDelegateInfoTokenType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addPlayerDelegateInfoToken:(id)a0;
- (void)clearPlayerDelegateInfoTokens;
- (unsigned long long)playerDelegateInfoTokensCount;
- (id)playerDelegateInfoTokenAtIndex:(unsigned long long)a0;

@end
