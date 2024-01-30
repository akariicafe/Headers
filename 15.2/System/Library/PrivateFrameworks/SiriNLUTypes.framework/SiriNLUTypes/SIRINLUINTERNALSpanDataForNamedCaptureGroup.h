@class NSString;

@interface SIRINLUINTERNALSpanDataForNamedCaptureGroup : PBCodable <NSCopying> {
    struct { unsigned char targetNodeIdx : 1; unsigned char targetUdaIdx : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) BOOL hasTargetNodeIdx;
@property (nonatomic) int targetNodeIdx;
@property (nonatomic) BOOL hasTargetUdaIdx;
@property (nonatomic) int targetUdaIdx;

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

@end
