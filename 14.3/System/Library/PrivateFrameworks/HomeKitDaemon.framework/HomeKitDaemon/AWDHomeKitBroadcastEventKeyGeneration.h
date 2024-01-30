@class AWDHomeKitVendorInformation;

@interface AWDHomeKitBroadcastEventKeyGeneration : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char certified : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasCertified;
@property (nonatomic) int certified;

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
- (id)reasonAsString:(int)a0;
- (int)StringAsReason:(id)a0;
- (id)certifiedAsString:(int)a0;
- (int)StringAsCertified:(id)a0;

@end
