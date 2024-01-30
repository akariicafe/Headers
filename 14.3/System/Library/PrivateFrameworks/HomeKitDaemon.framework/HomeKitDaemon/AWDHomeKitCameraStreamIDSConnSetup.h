@class AWDHomeKitCameraStreamIDSConnSetupParameters;

@interface AWDHomeKitCameraStreamIDSConnSetup : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVideoConnection;
@property (retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetupParameters *videoConnection;
@property (readonly, nonatomic) BOOL hasAudioConnection;
@property (retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetupParameters *audioConnection;
@property (readonly, nonatomic) BOOL hasKeepaliveConnection;
@property (retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetupParameters *keepaliveConnection;

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
