@class NSString;

@interface _MRGameControllerPropertiesProtobuf : PBCodable <NSCopying> {
    struct { unsigned char buttonAUpDelay : 1; unsigned char playerIndex : 1; unsigned char profile : 1; unsigned char supportsExtendedMotion : 1; } _has;
}

@property (nonatomic) BOOL hasPlayerIndex;
@property (nonatomic) unsigned int playerIndex;
@property (readonly, nonatomic) BOOL hasVendorName;
@property (retain, nonatomic) NSString *vendorName;
@property (nonatomic) BOOL hasButtonAUpDelay;
@property (nonatomic) int buttonAUpDelay;
@property (nonatomic) BOOL hasProfile;
@property (nonatomic) int profile;
@property (nonatomic) BOOL hasSupportsExtendedMotion;
@property (nonatomic) BOOL supportsExtendedMotion;

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
- (int)StringAsProfile:(id)a0;
- (id)profileAsString:(int)a0;

@end
