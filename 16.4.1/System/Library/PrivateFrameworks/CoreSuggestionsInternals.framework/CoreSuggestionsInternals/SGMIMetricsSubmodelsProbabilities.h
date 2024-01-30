@interface SGMIMetricsSubmodelsProbabilities : PBCodable <NSCopying> {
    struct { unsigned char attachmentsProbability : 1; unsigned char conversationProbability : 1; unsigned char domainFromSenderProbability : 1; unsigned char listIdProbability : 1; unsigned char mailboxProbability : 1; unsigned char mailboxTypeProbability : 1; unsigned char personCCRecipientsProbability : 1; unsigned char personFromSenderInDyadicConversationProbability : 1; unsigned char personFromSenderProbability : 1; unsigned char personToRecipientsProbability : 1; unsigned char standardMailRulesProbability : 1; unsigned char subjectContentProbability : 1; unsigned char subjectCountStatsProbability : 1; } _has;
}

@property (nonatomic) BOOL hasPersonFromSenderProbability;
@property (nonatomic) float personFromSenderProbability;
@property (nonatomic) BOOL hasPersonFromSenderInDyadicConversationProbability;
@property (nonatomic) float personFromSenderInDyadicConversationProbability;
@property (nonatomic) BOOL hasSubjectContentProbability;
@property (nonatomic) float subjectContentProbability;
@property (nonatomic) BOOL hasPersonToRecipientsProbability;
@property (nonatomic) float personToRecipientsProbability;
@property (nonatomic) BOOL hasPersonCCRecipientsProbability;
@property (nonatomic) float personCCRecipientsProbability;
@property (nonatomic) BOOL hasDomainFromSenderProbability;
@property (nonatomic) float domainFromSenderProbability;
@property (nonatomic) BOOL hasConversationProbability;
@property (nonatomic) float conversationProbability;
@property (nonatomic) BOOL hasListIdProbability;
@property (nonatomic) float listIdProbability;
@property (nonatomic) BOOL hasAttachmentsProbability;
@property (nonatomic) float attachmentsProbability;
@property (nonatomic) BOOL hasSubjectCountStatsProbability;
@property (nonatomic) float subjectCountStatsProbability;
@property (nonatomic) BOOL hasStandardMailRulesProbability;
@property (nonatomic) float standardMailRulesProbability;
@property (nonatomic) BOOL hasMailboxProbability;
@property (nonatomic) float mailboxProbability;
@property (nonatomic) BOOL hasMailboxTypeProbability;
@property (nonatomic) float mailboxTypeProbability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
