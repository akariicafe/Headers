@class FCCKPRecord;

@interface FCCKPOplockFailure : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRecordForOplockFailure;
@property (retain, nonatomic) FCCKPRecord *recordForOplockFailure;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
