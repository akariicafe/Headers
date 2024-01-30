@class NSString;

@interface PPPBDateComponents : PBCodable <NSCopying> {
    struct { unsigned char day : 1; unsigned char month : 1; unsigned char year : 1; } _has;
}

@property (nonatomic) BOOL hasDay;
@property (nonatomic) int day;
@property (nonatomic) BOOL hasMonth;
@property (nonatomic) int month;
@property (nonatomic) BOOL hasYear;
@property (nonatomic) int year;
@property (readonly, nonatomic) BOOL hasCalendarIdentifier;
@property (retain, nonatomic) NSString *calendarIdentifier;
@property (readonly, nonatomic) BOOL hasTimeZoneName;
@property (retain, nonatomic) NSString *timeZoneName;

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

@end
