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
- (void)addTopicCohorts:(id)a0;
- (void)addTopicCohortScores:(id)a0;
- (unsigned long long)topicCohortsCount;
- (void)clearTopicCohorts;
- (id)topicCohortsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicCohortScoresCount;
- (void)clearTopicCohortScores;
- (id)topicCohortScoresAtIndex:(unsigned long long)a0;

@end
