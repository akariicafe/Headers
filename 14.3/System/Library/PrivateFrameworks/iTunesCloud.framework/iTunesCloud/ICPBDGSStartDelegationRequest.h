@class NSMutableArray;

@interface ICPBDGSStartDelegationRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *playerInfoContextRequestTokens;

+ (Class)playerInfoContextRequestTokenType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addPlayerInfoContextRequestToken:(id)a0;
- (void)clearPlayerInfoContextRequestTokens;
- (unsigned long long)playerInfoContextRequestTokensCount;
- (id)playerInfoContextRequestTokenAtIndex:(unsigned long long)a0;

@end
