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

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
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
