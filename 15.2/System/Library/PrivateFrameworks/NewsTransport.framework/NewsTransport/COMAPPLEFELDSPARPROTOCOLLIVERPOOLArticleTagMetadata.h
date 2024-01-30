@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata, NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleTagMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasChannelTagMetadata;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *channelTagMetadata;
@property (retain, nonatomic) NSMutableArray *topicTagMetadatas;

+ (Class)topicTagMetadataType;

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
- (void)addTopicTagMetadata:(id)a0;
- (unsigned long long)topicTagMetadatasCount;
- (void)clearTopicTagMetadatas;
- (id)topicTagMetadataAtIndex:(unsigned long long)a0;

@end
