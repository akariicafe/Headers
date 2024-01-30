@class NSData;

@interface HKCodableCondensedWorkout : PBCodable <NSCopying> {
    struct { unsigned char condenserDate : 1; unsigned char condenserVersion : 1; unsigned char creationDate : 1; unsigned char duration : 1; unsigned char endDate : 1; unsigned char persistentID : 1; unsigned char startDate : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasPersistentID;
@property (nonatomic) long long persistentID;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasCondenserVersion;
@property (nonatomic) long long condenserVersion;
@property (nonatomic) BOOL hasCondenserDate;
@property (nonatomic) double condenserDate;

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
