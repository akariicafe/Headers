@class NSString;

@interface CLPMeta : PBCodable <NSCopying> {
    struct { unsigned char submissionId : 1; } _has;
}

@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *softwareVersion;
@property (nonatomic) BOOL hasSubmissionId;
@property (nonatomic) long long submissionId;
@property (readonly, nonatomic) BOOL hasProbeId;
@property (retain, nonatomic) NSString *probeId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
