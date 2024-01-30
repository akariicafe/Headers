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
- (id)certifiedAsString:(int)a0;
- (int)StringAsCertified:(id)a0;

@end
