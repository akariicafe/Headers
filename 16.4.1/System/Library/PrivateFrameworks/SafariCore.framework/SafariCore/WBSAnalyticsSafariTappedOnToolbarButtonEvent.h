@interface WBSAnalyticsSafariTappedOnToolbarButtonEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char button : 1; unsigned char usedLongTap : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasButton;
@property (nonatomic) int button;
@property (nonatomic) BOOL hasUsedLongTap;
@property (nonatomic) BOOL usedLongTap;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsButton:(id)a0;
- (id)buttonAsString:(int)a0;

@end
