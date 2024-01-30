@interface ASCodableCloudKitDateComponents : PBCodable <NSCopying> {
    struct { unsigned char day : 1; unsigned char era : 1; unsigned char hour : 1; unsigned char month : 1; unsigned char year : 1; } _has;
}

@property (nonatomic) BOOL hasYear;
@property (nonatomic) long long year;
@property (nonatomic) BOOL hasMonth;
@property (nonatomic) long long month;
@property (nonatomic) BOOL hasDay;
@property (nonatomic) long long day;
@property (nonatomic) BOOL hasHour;
@property (nonatomic) long long hour;
@property (nonatomic) BOOL hasEra;
@property (nonatomic) long long era;

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
