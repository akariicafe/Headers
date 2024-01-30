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
