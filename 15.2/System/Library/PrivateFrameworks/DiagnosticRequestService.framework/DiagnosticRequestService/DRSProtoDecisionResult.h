@class NSString;

@interface DRSProtoDecisionResult : PBCodable <NSCopying> {
    struct { unsigned char accepted : 1; } _has;
}

@property (nonatomic) BOOL hasAccepted;
@property (nonatomic) BOOL accepted;
@property (readonly, nonatomic) BOOL hasRejectionReason;
@property (retain, nonatomic) NSString *rejectionReason;

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
