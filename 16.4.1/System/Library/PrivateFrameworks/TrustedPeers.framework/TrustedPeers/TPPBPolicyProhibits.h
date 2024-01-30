@class NSString;

@interface TPPBPolicyProhibits : PBCodable <NSCopying> {
    struct { unsigned char policyVersion : 1; } _has;
}

@property (nonatomic) BOOL hasPolicyVersion;
@property (nonatomic) unsigned long long policyVersion;
@property (readonly, nonatomic) BOOL hasSponsorId;
@property (retain, nonatomic) NSString *sponsorId;
@property (readonly, nonatomic) BOOL hasSponsorCategory;
@property (retain, nonatomic) NSString *sponsorCategory;
@property (readonly, nonatomic) BOOL hasCandidateCategory;
@property (retain, nonatomic) NSString *candidateCategory;
@property (readonly, nonatomic) BOOL hasExplanation;
@property (retain, nonatomic) NSString *explanation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
