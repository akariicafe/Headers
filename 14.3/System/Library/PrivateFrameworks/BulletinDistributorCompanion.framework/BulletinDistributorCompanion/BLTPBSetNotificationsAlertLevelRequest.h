@class NSString;

@interface BLTPBSetNotificationsAlertLevelRequest : PBRequest <NSCopying> {
    struct { unsigned char level : 1; unsigned char mirror : 1; } _has;
}

@property (nonatomic) BOOL hasLevel;
@property (nonatomic) int level;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (retain, nonatomic) NSString *sectionID;
@property (nonatomic) BOOL hasMirror;
@property (nonatomic) BOOL mirror;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)levelAsString:(int)a0;
- (int)StringAsLevel:(id)a0;

@end
