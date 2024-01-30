@class NSString, NSMutableArray;

@interface NPKProtoStandaloneError : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) long long code;
@property (retain, nonatomic) NSMutableArray *userInfos;

+ (Class)userInfosType;

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
- (unsigned long long)userInfosCount;
- (void)clearUserInfos;
- (void)addUserInfos:(id)a0;
- (id)userInfosAtIndex:(unsigned long long)a0;

@end
