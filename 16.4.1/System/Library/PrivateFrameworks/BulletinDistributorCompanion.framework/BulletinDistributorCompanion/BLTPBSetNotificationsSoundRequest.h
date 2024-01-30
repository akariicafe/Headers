@class NSString;

@interface BLTPBSetNotificationsSoundRequest : PBRequest <NSCopying> {
    struct { unsigned char sound : 1; } _has;
}

@property (nonatomic) BOOL hasSound;
@property (nonatomic) int sound;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (retain, nonatomic) NSString *sectionID;

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
- (int)StringAsSound:(id)a0;
- (id)soundAsString:(int)a0;

@end
