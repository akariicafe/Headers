@class NSData, NSMutableArray, NSString;

@interface ICPBDGSStartDelegationResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPlayerAnisetteMID;
@property (retain, nonatomic) NSData *playerAnisetteMID;
@property (readonly, nonatomic) BOOL hasPlayerDeviceGUID;
@property (retain, nonatomic) NSData *playerDeviceGUID;
@property (retain, nonatomic) NSMutableArray *playerInfoContextTokens;
@property (readonly, nonatomic) BOOL hasPlayerUserAgent;
@property (retain, nonatomic) NSString *playerUserAgent;

+ (Class)playerInfoContextTokenType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addPlayerInfoContextToken:(id)a0;
- (void)clearPlayerInfoContextTokens;
- (unsigned long long)playerInfoContextTokensCount;
- (id)playerInfoContextTokenAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
