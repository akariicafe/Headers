@class NSString, NPKProtoStandaloneRequestHeader, NPKProtoStandaloneImageSize;

@interface NPKProtoStandaloneInitializationRequest : PBRequest <NSCopying> {
    struct { unsigned char useSimulatedFlowController : 1; } _has;
}

@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader;
@property (nonatomic) BOOL hasUseSimulatedFlowController;
@property (nonatomic) BOOL useSimulatedFlowController;
@property (readonly, nonatomic) BOOL hasUserLanguageCode;
@property (retain, nonatomic) NSString *userLanguageCode;
@property (readonly, nonatomic) BOOL hasPassImageSize;
@property (retain, nonatomic) NPKProtoStandaloneImageSize *passImageSize;
@property (readonly, nonatomic) BOOL hasPassThumbnailImageSize;
@property (retain, nonatomic) NPKProtoStandaloneImageSize *passThumbnailImageSize;

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
