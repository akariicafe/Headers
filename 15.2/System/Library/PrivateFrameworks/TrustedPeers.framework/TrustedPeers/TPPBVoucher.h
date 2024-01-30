@class NSString;

@interface TPPBVoucher : PBCodable <NSCopying> {
    struct { unsigned char reason : 1; } _has;
}

@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;
@property (readonly, nonatomic) BOOL hasBeneficiary;
@property (retain, nonatomic) NSString *beneficiary;
@property (readonly, nonatomic) BOOL hasSponsor;
@property (retain, nonatomic) NSString *sponsor;

- (id)reasonAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (int)StringAsReason:(id)a0;
- (id)dictionaryRepresentation;

@end
