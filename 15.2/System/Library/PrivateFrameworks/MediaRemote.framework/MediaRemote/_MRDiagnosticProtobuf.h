@class NSString;

@interface _MRDiagnosticProtobuf : PBCodable <NSCopying> {
    struct { unsigned char dateGenerated : 1; } _has;
}

@property (nonatomic) BOOL hasDateGenerated;
@property (nonatomic) double dateGenerated;
@property (readonly, nonatomic) BOOL hasDiagnosticInfo;
@property (retain, nonatomic) NSString *diagnosticInfo;

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
