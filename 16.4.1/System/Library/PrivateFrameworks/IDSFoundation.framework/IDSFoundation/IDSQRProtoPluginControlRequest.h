@class NSString, NSData;

@interface IDSQRProtoPluginControlRequest : PBRequest <NSCopying> {
    struct { unsigned char pluginStreamId : 1; } _has;
}

@property (nonatomic) unsigned int pluginOperation;
@property (retain, nonatomic) NSString *pluginName;
@property (nonatomic) BOOL hasPluginStreamId;
@property (nonatomic) unsigned int pluginStreamId;
@property (readonly, nonatomic) BOOL hasPluginClientRawPublicKey;
@property (retain, nonatomic) NSData *pluginClientRawPublicKey;

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
