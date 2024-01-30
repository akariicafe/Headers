@class NSString;

@interface NWPBHostEndpoint : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasHostname;
@property (retain, nonatomic) NSString *hostname;
@property (readonly, nonatomic) BOOL hasPort;
@property (retain, nonatomic) NSString *port;

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

@end
