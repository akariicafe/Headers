@class NSString, NSData;

@interface SYErrorInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *domain;
@property (nonatomic) int code;
@property (readonly, nonatomic) BOOL hasUserInfo;
@property (retain, nonatomic) NSData *userInfo;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithError:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_usefulDescription;

@end
