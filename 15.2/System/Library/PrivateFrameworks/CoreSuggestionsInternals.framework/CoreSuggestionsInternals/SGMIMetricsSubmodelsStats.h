@class SGMIMetricsSubmodelStats;

@interface SGMIMetricsSubmodelsStats : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPersonFromSenderStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *personFromSenderStats;
@property (readonly, nonatomic) BOOL hasPersonFromSenderInDyadicConversationStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *personFromSenderInDyadicConversationStats;
@property (readonly, nonatomic) BOOL hasSubjectContentStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *subjectContentStats;
@property (readonly, nonatomic) BOOL hasPersonToRecipientsStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *personToRecipientsStats;
@property (readonly, nonatomic) BOOL hasPersonCCRecipientsStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *personCCRecipientsStats;
@property (readonly, nonatomic) BOOL hasDomainFromSenderStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *domainFromSenderStats;
@property (readonly, nonatomic) BOOL hasConversationStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *conversationStats;
@property (readonly, nonatomic) BOOL hasListIdStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *listIdStats;
@property (readonly, nonatomic) BOOL hasAttachmentsStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *attachmentsStats;
@property (readonly, nonatomic) BOOL hasSubjectCountStatsStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *subjectCountStatsStats;
@property (readonly, nonatomic) BOOL hasStandardMailRulesStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *standardMailRulesStats;
@property (readonly, nonatomic) BOOL hasMailboxStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *mailboxStats;
@property (readonly, nonatomic) BOOL hasMailboxTypeStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *mailboxTypeStats;

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
