@class NSString, GEORPPhotoWithMetadata, NSData, PBDataReader;

@interface GEORPInstructionCorrection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_comments;
    NSString *_photoId;
    GEORPPhotoWithMetadata *_photo;
    NSData *_routeStepScreenshotImageData;
    NSString *_routeStepScreenshotImageId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _routeStepIndex;
    unsigned int _routeStepSubstepIndex;
    struct { unsigned char has_routeStepIndex : 1; unsigned char has_routeStepSubstepIndex : 1; unsigned char read_comments : 1; unsigned char read_photoId : 1; unsigned char read_photo : 1; unsigned char read_routeStepScreenshotImageData : 1; unsigned char read_routeStepScreenshotImageId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasRouteStepIndex;
@property (nonatomic) unsigned int routeStepIndex;
@property (readonly, nonatomic) BOOL hasComments;
@property (retain, nonatomic) NSString *comments;
@property (readonly, nonatomic) BOOL hasPhoto;
@property (retain, nonatomic) GEORPPhotoWithMetadata *photo;
@property (nonatomic) BOOL hasRouteStepSubstepIndex;
@property (nonatomic) unsigned int routeStepSubstepIndex;
@property (readonly, nonatomic) BOOL hasRouteStepScreenshotImageData;
@property (retain, nonatomic) NSData *routeStepScreenshotImageData;
@property (readonly, nonatomic) BOOL hasPhotoId;
@property (retain, nonatomic) NSString *photoId;
@property (readonly, nonatomic) BOOL hasRouteStepScreenshotImageId;
@property (retain, nonatomic) NSString *routeStepScreenshotImageId;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
