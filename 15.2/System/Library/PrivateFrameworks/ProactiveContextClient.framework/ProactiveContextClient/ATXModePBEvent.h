@class NSString;

@interface ATXModePBEvent : PBCodable <NSCopying> {
    struct { unsigned char endDate : 1; unsigned char startDate : 1; unsigned char intValue : 1; unsigned char mode : 1; unsigned char origin : 1; unsigned char isStart : 1; } _has;
}

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasMode;
@property (nonatomic) int mode;
@property (nonatomic) BOOL hasIntValue;
@property (nonatomic) int intValue;
@property (readonly, nonatomic) BOOL hasStrValue;
@property (retain, nonatomic) NSString *strValue;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (readonly, nonatomic) BOOL hasJsonMeta;
@property (retain, nonatomic) NSString *jsonMeta;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) int origin;
@property (readonly, nonatomic) BOOL hasOriginBundleId;
@property (retain, nonatomic) NSString *originBundleId;
@property (nonatomic) BOOL hasIsStart;
@property (nonatomic) BOOL isStart;

- (id)modeAsString:(int)a0;
- (int)StringAsMode:(id)a0;
- (int)StringAsOrigin:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)originAsString:(int)a0;
- (id)description;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
