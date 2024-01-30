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

@end
