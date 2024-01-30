@class NSString;

@interface ATXAnchorModelPBAnchorMetadata : PBCodable <NSCopying> {
    struct { unsigned char anchorEventType : 1; unsigned char anchorType : 1; unsigned char dayOfMonth : 1; unsigned char dayOfWeek : 1; unsigned char hourOfDay : 1; unsigned char locationType : 1; unsigned char month : 1; } _has;
}

@property (nonatomic) BOOL hasAnchorType;
@property (nonatomic) int anchorType;
@property (readonly, nonatomic) BOOL hasAnchorEventIdentifier;
@property (retain, nonatomic) NSString *anchorEventIdentifier;
@property (nonatomic) BOOL hasAnchorEventType;
@property (nonatomic) int anchorEventType;
@property (nonatomic) BOOL hasMonth;
@property (nonatomic) unsigned int month;
@property (nonatomic) BOOL hasDayOfMonth;
@property (nonatomic) unsigned int dayOfMonth;
@property (nonatomic) BOOL hasHourOfDay;
@property (nonatomic) unsigned int hourOfDay;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) int dayOfWeek;
@property (readonly, nonatomic) BOOL hasLocationIdentifier;
@property (retain, nonatomic) NSString *locationIdentifier;
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int locationType;

- (id)dayOfWeekAsString:(int)a0;
- (int)StringAsDayOfWeek:(id)a0;
- (int)StringAsLocationType:(id)a0;
- (void).cxx_destruct;
- (id)locationTypeAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)anchorTypeAsString:(int)a0;
- (int)StringAsAnchorType:(id)a0;
- (id)anchorEventTypeAsString:(int)a0;
- (int)StringAsAnchorEventType:(id)a0;

@end
