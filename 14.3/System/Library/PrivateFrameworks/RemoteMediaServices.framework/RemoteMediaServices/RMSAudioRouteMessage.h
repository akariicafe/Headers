@class NSString;

@interface RMSAudioRouteMessage : PBCodable <NSCopying> {
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
