@class NSString;

@interface ADRoutingInfoMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *searchType;
@property (retain, nonatomic) NSString *environmentURL;
@property (retain, nonatomic) NSString *protoVersion;

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

@end
