@class NSString;

@interface NNMKProtoErrorDownloadingContentForMessageWarning : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMessageId;
@property (retain, nonatomic) NSString *messageId;

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
