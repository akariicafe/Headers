@class NSString;

@interface AWDNetworkUsage : PBCodable <NSCopying> {
    struct { unsigned char cellIn : 1; unsigned char cellOut : 1; unsigned char wifiIn : 1; unsigned char wifiOut : 1; unsigned char numConnections : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleName;
@property (retain, nonatomic) NSString *bundleName;
@property (nonatomic) BOOL hasWifiIn;
@property (nonatomic) unsigned long long wifiIn;
@property (nonatomic) BOOL hasWifiOut;
@property (nonatomic) unsigned long long wifiOut;
@property (nonatomic) BOOL hasCellIn;
@property (nonatomic) unsigned long long cellIn;
@property (nonatomic) BOOL hasCellOut;
@property (nonatomic) unsigned long long cellOut;
@property (nonatomic) BOOL hasNumConnections;
@property (nonatomic) unsigned int numConnections;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
