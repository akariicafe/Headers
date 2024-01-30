@class NSData, NSString;

@interface NPKProtoRemoteAdminPerformRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSData *url;
@property (retain, nonatomic) NSString *seid;
@property (retain, nonatomic) NSString *command;
@property (readonly, nonatomic) BOOL hasInfoDictionary;
@property (retain, nonatomic) NSData *infoDictionary;

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
