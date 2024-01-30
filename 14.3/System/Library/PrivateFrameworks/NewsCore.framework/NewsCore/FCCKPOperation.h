@class NSString;

@interface FCCKPOperation : PBCodable <NSCopying> {
    struct { unsigned char type : 1; unsigned char last : 1; unsigned char synchronousMode : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOperationUUID;
@property (retain, nonatomic) NSString *operationUUID;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasSynchronousMode;
@property (nonatomic) BOOL synchronousMode;
@property (nonatomic) BOOL hasLast;
@property (nonatomic) BOOL last;

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
