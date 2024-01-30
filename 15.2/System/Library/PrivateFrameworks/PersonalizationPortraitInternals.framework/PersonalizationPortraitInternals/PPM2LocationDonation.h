@class NSString;

@interface PPM2LocationDonation : PBCodable <NSCopying> {
    struct { unsigned char donationSource : 1; } _has;
}

@property (nonatomic) BOOL hasDonationSource;
@property (nonatomic) int donationSource;
@property (readonly, nonatomic) BOOL hasGroupId;
@property (retain, nonatomic) NSString *groupId;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;

- (id)donationSourceAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsDonationSource:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
