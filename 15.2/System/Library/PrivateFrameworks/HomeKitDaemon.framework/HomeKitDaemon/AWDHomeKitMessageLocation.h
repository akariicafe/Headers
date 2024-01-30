@interface AWDHomeKitMessageLocation : PBCodable <NSCopying> {
    struct { unsigned char accuracy : 1; unsigned char latitude : 1; unsigned char longitude : 1; unsigned char timestamp : 1; unsigned char numOfReachableBTLEAcc : 1; unsigned char numOfReachableIPAcc : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL hasAccuracy;
@property (nonatomic) double accuracy;
@property (nonatomic) BOOL hasNumOfReachableIPAcc;
@property (nonatomic) unsigned int numOfReachableIPAcc;
@property (nonatomic) BOOL hasNumOfReachableBTLEAcc;
@property (nonatomic) unsigned int numOfReachableBTLEAcc;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
