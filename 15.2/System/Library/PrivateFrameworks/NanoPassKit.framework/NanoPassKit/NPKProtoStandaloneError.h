@class NSString, NSMutableArray;

@interface NPKProtoStandaloneError : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) long long code;
@property (retain, nonatomic) NSMutableArray *userInfos;

+ (Class)userInfosType;

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
- (unsigned long long)userInfosCount;
- (void)clearUserInfos;
- (void)addUserInfos:(id)a0;
- (id)userInfosAtIndex:(unsigned long long)a0;

@end
