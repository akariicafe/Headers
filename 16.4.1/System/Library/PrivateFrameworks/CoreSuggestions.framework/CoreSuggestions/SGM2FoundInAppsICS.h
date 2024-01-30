@class NSString;

@interface SGM2FoundInAppsICS : PBCodable <NSCopying> {
    struct { unsigned char datetime : 1; unsigned char timezone : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasTimezone;
@property (nonatomic) int timezone;
@property (nonatomic) BOOL hasDatetime;
@property (nonatomic) int datetime;

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
- (int)StringAsDatetime:(id)a0;
- (int)StringAsTimezone:(id)a0;
- (id)datetimeAsString:(int)a0;
- (id)timezoneAsString:(int)a0;

@end
