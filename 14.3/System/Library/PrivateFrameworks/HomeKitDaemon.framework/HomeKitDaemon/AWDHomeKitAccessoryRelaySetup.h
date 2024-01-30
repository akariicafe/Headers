@class NSString, AWDHomeKitVendorInformation;

@interface AWDHomeKitAccessoryRelaySetup : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char actionType : 1; unsigned char certified : 1; unsigned char duration : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) int actionType;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails;
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
- (id)actionTypeAsString:(int)a0;
- (int)StringAsActionType:(id)a0;
- (id)certifiedAsString:(int)a0;
- (int)StringAsCertified:(id)a0;

@end
