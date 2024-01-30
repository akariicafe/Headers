@interface AWDMailUserEngagement : PBCodable <NSCopying> {
    struct { unsigned char messageAgeInWeeks : 1; unsigned char topHitIndexInSpotlightList : 1; unsigned char topHitIndexInTopHitsList : 1; unsigned char mailboxType : 1; unsigned char type : 1; unsigned char isTopHitMessage : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasMessageAgeInWeeks;
@property (nonatomic) long long messageAgeInWeeks;
@property (nonatomic) BOOL hasMailboxType;
@property (nonatomic) int mailboxType;
@property (nonatomic) BOOL hasIsTopHitMessage;
@property (nonatomic) BOOL isTopHitMessage;
@property (nonatomic) BOOL hasTopHitIndexInTopHitsList;
@property (nonatomic) long long topHitIndexInTopHitsList;
@property (nonatomic) BOOL hasTopHitIndexInSpotlightList;
@property (nonatomic) long long topHitIndexInSpotlightList;

- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)typeAsString:(int)a0;
- (id)mailboxTypeAsString:(int)a0;
- (int)StringAsMailboxType:(id)a0;
- (id)initWithEngagmentType:(int)a0 receivedDate:(id)a1 mailboxType:(int)a2 isTopHit:(BOOL)a3 messageListIndex:(long long)a4 spotlightListIndex:(long long)a5;
- (id)initWithEngagmentType:(int)a0 message:(id)a1 isTopHit:(BOOL)a2 messageListIndex:(long long)a3 spotlightListIndex:(long long)a4;
- (id)initWithEngagmentType:(int)a0 isTopHit:(BOOL)a1;
- (id)initWithEngagmentType:(int)a0;

@end
