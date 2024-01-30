@class AWDHomeKitVendorInformation;

@interface AWDHomeKitAccessoryNetworkProtectionReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char status : 1; unsigned char hadViolationsInLast24h : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasHadViolationsInLast24h;
@property (nonatomic) BOOL hadViolationsInLast24h;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsStatus:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)statusAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
