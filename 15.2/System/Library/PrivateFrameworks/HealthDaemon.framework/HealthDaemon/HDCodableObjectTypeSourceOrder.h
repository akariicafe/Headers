@class NSData;

@interface HDCodableObjectTypeSourceOrder : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _modificationDates;
    struct { unsigned char objectType : 1; unsigned char userOrdered : 1; } _has;
}

@property (nonatomic) BOOL hasObjectType;
@property (nonatomic) long long objectType;
@property (nonatomic) BOOL hasUserOrdered;
@property (nonatomic) BOOL userOrdered;
@property (readonly, nonatomic) BOOL hasSourceUUIDs;
@property (retain, nonatomic) NSData *sourceUUIDs;
@property (readonly, nonatomic) unsigned long long modificationDatesCount;
@property (readonly, nonatomic) double *modificationDates;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (long long)decodedDataTypeCode;
- (void)addModificationDates:(double)a0;
- (void)clearModificationDates;
- (double)modificationDatesAtIndex:(unsigned long long)a0;
- (void)setModificationDates:(double *)a0 count:(unsigned long long)a1;

@end
