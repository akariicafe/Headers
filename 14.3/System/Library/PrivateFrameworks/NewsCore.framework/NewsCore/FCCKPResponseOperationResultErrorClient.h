@class FCCKPOplockFailure, FCCKPUniqueFieldFailure;

@interface FCCKPResponseOperationResultErrorClient : PBCodable <NSCopying> {
    FCCKPOplockFailure *_oplockFailure;
    FCCKPUniqueFieldFailure *_uniqueFieldFailure;
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOplockFailure;
@property (retain, nonatomic) FCCKPOplockFailure *oplockFailure;
@property (readonly, nonatomic) BOOL hasUniqueFieldFailure;
@property (retain, nonatomic) FCCKPUniqueFieldFailure *uniqueFieldFailure;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

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
