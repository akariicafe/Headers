@class EDPBModelFeaturesPromotion, EDPBModelFeaturesImportant;

@interface EDPBInteractionEventCategoryInferred : PBCodable <EDPBDataSetters, EDPBBaseMessageFields, NSCopying> {
    struct { unsigned char accountId : 1; unsigned char conversationId : 1; unsigned char mailboxId : 1; unsigned char messageId : 1; unsigned char score : 1; unsigned char categoryType : 1; unsigned char mailboxType : 1; unsigned char modelId : 1; unsigned char modelVersion : 1; unsigned char positive : 1; } _has;
}

@property (nonatomic) long long accountId;
@property (nonatomic) long long mailboxId;
@property (nonatomic) int mailboxType;
@property (nonatomic) long long conversationId;
@property (nonatomic) long long messageId;
@property (nonatomic) BOOL hasAccountId;
@property (nonatomic) long long accountId;
@property (nonatomic) BOOL hasMailboxId;
@property (nonatomic) long long mailboxId;
@property (nonatomic) BOOL hasMailboxType;
@property (nonatomic) int mailboxType;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationId;
@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) long long messageId;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasPositive;
@property (nonatomic) BOOL positive;
@property (nonatomic) BOOL hasCategoryType;
@property (nonatomic) int categoryType;
@property (nonatomic) BOOL hasModelId;
@property (nonatomic) unsigned int modelId;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) unsigned int modelVersion;
@property (readonly, nonatomic) BOOL hasFeaturesImportant;
@property (retain, nonatomic) EDPBModelFeaturesImportant *featuresImportant;
@property (readonly, nonatomic) BOOL hasFeaturesPromotion;
@property (retain, nonatomic) EDPBModelFeaturesPromotion *featuresPromotion;

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
- (int)StringAsMailboxType:(id)a0;
- (id)mailboxTypeAsString:(int)a0;
- (int)StringAsCategoryType:(id)a0;
- (id)categoryTypeAsString:(int)a0;
- (void)withHasher:(id)a0 setMessage:(id)a1 data:(id)a2;

@end
