@class NSString, NSData;

@interface SYErrorInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *domain;
@property (nonatomic) int code;
@property (readonly, nonatomic) BOOL hasUserInfo;
@property (retain, nonatomic) NSData *userInfo;

+ (void)initialize;

- (id)initWithError:(id)a0;
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
- (id)_usefulDescription;

@end
