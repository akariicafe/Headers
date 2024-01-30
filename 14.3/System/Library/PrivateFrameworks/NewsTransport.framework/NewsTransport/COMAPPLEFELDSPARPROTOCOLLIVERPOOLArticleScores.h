@class NSMutableArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicCohorts;
@property (readonly, nonatomic) BOOL hasGlobalCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (readonly, nonatomic) BOOL hasSourceChannelCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *sourceChannelCohorts;
@property (retain, nonatomic) NSMutableArray *topicCohortScores;

+ (Class)topicCohortsType;
+ (Class)topicCohortScoresType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addTopicCohorts:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)topicCohortsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)topicCohortScoresAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void)clearTopicCohortScores;
- (unsigned long long)topicCohortsCount;
- (id)description;
- (unsigned long long)topicCohortScoresCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addTopicCohortScores:(id)a0;
- (void)clearTopicCohorts;

@end
