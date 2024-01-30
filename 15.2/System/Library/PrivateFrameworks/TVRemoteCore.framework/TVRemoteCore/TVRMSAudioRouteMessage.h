@class NSString;

@interface TVRMSAudioRouteMessage : PBCodable <NSCopying> {
    struct { unsigned char macAddress : 1; unsigned char selected : 1; unsigned char supportsVideo : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL hasMacAddress;
@property (nonatomic) long long macAddress;
@property (nonatomic) BOOL hasSupportsVideo;
@property (nonatomic) BOOL supportsVideo;
@property (nonatomic) BOOL hasSelected;
@property (nonatomic) BOOL selected;

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
