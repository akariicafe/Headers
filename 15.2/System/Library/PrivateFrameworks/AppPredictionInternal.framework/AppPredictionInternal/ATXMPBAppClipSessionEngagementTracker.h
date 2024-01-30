@class NSString;

@interface ATXMPBAppClipSessionEngagementTracker : PBCodable <NSCopying> {
    struct { unsigned char interactionType : 1; } _has;
}

@property (nonatomic) BOOL hasInteractionType;
@property (nonatomic) int interactionType;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasUrlHash;
@property (retain, nonatomic) NSString *urlHash;

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
- (id)interactionTypeAsString:(int)a0;
- (int)StringAsInteractionType:(id)a0;

@end
