@class NSMutableArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicConversionStats;
@property (readonly, nonatomic) BOOL hasChannelConversionStats;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *channelConversionStats;
@property (readonly, nonatomic) BOOL hasGlobalConversionStats;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;

+ (Class)topicConversionStatsType;

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
- (void)addTopicConversionStats:(id)a0;
- (unsigned long long)topicConversionStatsCount;
- (void)clearTopicConversionStats;
- (id)topicConversionStatsAtIndex:(unsigned long long)a0;

@end
