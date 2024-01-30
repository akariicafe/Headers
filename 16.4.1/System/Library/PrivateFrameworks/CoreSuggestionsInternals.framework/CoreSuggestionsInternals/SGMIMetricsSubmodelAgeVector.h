@interface SGMIMetricsSubmodelAgeVector : PBCodable <NSCopying> {
    struct { unsigned char conversationAge : 1; unsigned char domainFromSenderAge : 1; unsigned char personCCRecipientsAge : 1; unsigned char personFromSenderAge : 1; unsigned char personFromSenderInDyadicConversationAge : 1; unsigned char personToRecipientsAge : 1; unsigned char subjectContentAge : 1; } _has;
}

@property (nonatomic) BOOL hasPersonFromSenderAge;
@property (nonatomic) float personFromSenderAge;
@property (nonatomic) BOOL hasPersonFromSenderInDyadicConversationAge;
@property (nonatomic) float personFromSenderInDyadicConversationAge;
@property (nonatomic) BOOL hasSubjectContentAge;
@property (nonatomic) float subjectContentAge;
@property (nonatomic) BOOL hasPersonToRecipientsAge;
@property (nonatomic) float personToRecipientsAge;
@property (nonatomic) BOOL hasPersonCCRecipientsAge;
@property (nonatomic) float personCCRecipientsAge;
@property (nonatomic) BOOL hasDomainFromSenderAge;
@property (nonatomic) float domainFromSenderAge;
@property (nonatomic) BOOL hasConversationAge;
@property (nonatomic) float conversationAge;

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
