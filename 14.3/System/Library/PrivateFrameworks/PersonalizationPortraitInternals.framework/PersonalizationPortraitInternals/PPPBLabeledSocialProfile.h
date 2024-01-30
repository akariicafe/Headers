@class NSString;

@interface PPPBLabeledSocialProfile : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL hasUrlString;
@property (retain, nonatomic) NSString *urlString;
@property (readonly, nonatomic) BOOL hasUsername;
@property (retain, nonatomic) NSString *username;
@property (readonly, nonatomic) BOOL hasUserIdentifier;
@property (retain, nonatomic) NSString *userIdentifier;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NSString *service;

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

@end
