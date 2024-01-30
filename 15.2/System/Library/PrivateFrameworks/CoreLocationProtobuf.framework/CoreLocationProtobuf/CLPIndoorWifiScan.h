@class NSString;

@interface CLPIndoorWifiScan : PBCodable <NSCopying> {
    struct { unsigned char age : 1; unsigned char hidden : 1; } _has;
}

@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSString *mac;
@property (nonatomic) int channel;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) int hidden;
@property (nonatomic) int rssi;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) double age;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;

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
