@interface WBSAnalyticsSafariEnterPasswordsPreferencesEvent : PBCodable <NSCopying> {
    struct { unsigned char percentageOfDuplicatedPasswords : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasPercentageOfDuplicatedPasswords;
@property (nonatomic) unsigned long long percentageOfDuplicatedPasswords;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
