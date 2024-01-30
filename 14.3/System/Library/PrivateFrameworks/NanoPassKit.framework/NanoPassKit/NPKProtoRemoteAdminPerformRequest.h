@class NSData, NSString;

@interface NPKProtoRemoteAdminPerformRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSData *url;
@property (retain, nonatomic) NSString *seid;
@property (retain, nonatomic) NSString *command;
@property (readonly, nonatomic) BOOL hasInfoDictionary;
@property (retain, nonatomic) NSData *infoDictionary;

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
