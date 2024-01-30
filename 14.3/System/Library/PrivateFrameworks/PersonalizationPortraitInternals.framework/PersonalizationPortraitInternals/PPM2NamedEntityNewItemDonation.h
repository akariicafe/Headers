@class NSString;

@interface PPM2NamedEntityNewItemDonation : PBCodable <NSCopying> {
    struct { unsigned char algorithm : 1; unsigned char category : 1; unsigned char donationSource : 1; unsigned char newItem : 1; unsigned char userCreated : 1; } _has;
}

@property (nonatomic) BOOL hasDonationSource;
@property (nonatomic) int donationSource;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) int category;
@property (readonly, nonatomic) BOOL hasDynamicCategory;
@property (retain, nonatomic) NSString *dynamicCategory;
@property (readonly, nonatomic) BOOL hasGroupId;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) BOOL hasNewItem;
@property (nonatomic) BOOL newItem;
@property (nonatomic) BOOL hasAlgorithm;
@property (nonatomic) int algorithm;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;
@property (nonatomic) BOOL hasUserCreated;
@property (nonatomic) BOOL userCreated;

- (int)StringAsDonationSource:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsAlgorithm:(id)a0;
- (id)algorithmAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)categoryAsString:(int)a0;
- (int)StringAsCategory:(id)a0;
- (unsigned long long)hash;
- (id)donationSourceAsString:(int)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
