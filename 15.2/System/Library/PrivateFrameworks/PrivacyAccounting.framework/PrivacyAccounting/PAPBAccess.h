@class NSData, PAPBApplication;

@interface PAPBAccess : PBCodable <NSCopying> {
    struct { unsigned char timestampAdjustment : 1; unsigned char kind : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAccessor;
@property (retain, nonatomic) PAPBApplication *accessor;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSData *identifier;
@property (nonatomic) BOOL hasKind;
@property (nonatomic) int kind;
@property (nonatomic) BOOL hasTimestampAdjustment;
@property (nonatomic) double timestampAdjustment;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
