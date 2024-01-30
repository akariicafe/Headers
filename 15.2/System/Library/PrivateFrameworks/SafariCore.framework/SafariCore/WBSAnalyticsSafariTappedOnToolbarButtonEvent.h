@interface WBSAnalyticsSafariTappedOnToolbarButtonEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char button : 1; unsigned char usedLongTap : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasButton;
@property (nonatomic) int button;
@property (nonatomic) BOOL hasUsedLongTap;
@property (nonatomic) BOOL usedLongTap;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)buttonAsString:(int)a0;
- (int)StringAsButton:(id)a0;

@end
