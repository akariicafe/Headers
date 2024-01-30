@class PBUnknownFields, NSString, PBDataReader, NSMutableArray, GEOPDMuninViewState;

@interface GEORPGroundViewFeedbackContext : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _visiblePlaceMuids;
    NSString *_imageId;
    unsigned long long _imdataId;
    NSMutableArray *_onscreenImageResources;
    GEOPDMuninViewState *_viewState;
    NSMutableArray *_visibleFeatureHandles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _metadataTileBuildId;
    struct { unsigned char has_imdataId : 1; unsigned char has_metadataTileBuildId : 1; unsigned char read_unknownFields : 1; unsigned char read_visiblePlaceMuids : 1; unsigned char read_imageId : 1; unsigned char read_onscreenImageResources : 1; unsigned char read_viewState : 1; unsigned char read_visibleFeatureHandles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasViewState;
@property (retain, nonatomic) GEOPDMuninViewState *viewState;
@property (nonatomic) BOOL hasMetadataTileBuildId;
@property (nonatomic) unsigned int metadataTileBuildId;
@property (retain, nonatomic) NSMutableArray *onscreenImageResources;
@property (readonly, nonatomic) unsigned long long visiblePlaceMuidsCount;
@property (readonly, nonatomic) unsigned long long *visiblePlaceMuids;
@property (nonatomic) BOOL hasImdataId;
@property (nonatomic) unsigned long long imdataId;
@property (readonly, nonatomic) BOOL hasImageId;
@property (retain, nonatomic) NSString *imageId;
@property (retain, nonatomic) NSMutableArray *visibleFeatureHandles;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)onscreenImageResourceType;
+ (Class)visibleFeatureHandleType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addOnscreenImageResource:(id)a0;
- (void)addVisiblePlaceMuid:(unsigned long long)a0;
- (void)addVisibleFeatureHandle:(id)a0;
- (unsigned long long)onscreenImageResourcesCount;
- (void)clearOnscreenImageResources;
- (id)onscreenImageResourceAtIndex:(unsigned long long)a0;
- (void)clearVisiblePlaceMuids;
- (unsigned long long)visiblePlaceMuidAtIndex:(unsigned long long)a0;
- (unsigned long long)visibleFeatureHandlesCount;
- (void)clearVisibleFeatureHandles;
- (id)visibleFeatureHandleAtIndex:(unsigned long long)a0;
- (void)setVisiblePlaceMuids:(unsigned long long *)a0 count:(unsigned long long)a1;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
