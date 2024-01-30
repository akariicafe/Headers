@class HDCodableMetadataDictionary;

@interface HDCodableWorkoutEvent : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char duration : 1; unsigned char swimmingStrokeStyle : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasSwimmingStrokeStyle;
@property (nonatomic) long long swimmingStrokeStyle;
@property (readonly, nonatomic) BOOL hasMetadataDictionary;
@property (retain, nonatomic) HDCodableMetadataDictionary *metadataDictionary;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;

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
- (id)decodedDateIntervalStartDate;

@end
