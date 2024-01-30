@class NSString, MSPTransitStorageArtwork, PBUnknownFields;
@protocol GEOTransitArtworkDataSource;

@interface MSPTransitStorageSystem : PBCodable <GEOTransitSystem, NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char muid : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *artwork;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (id)initWithSystem:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)dictionaryRepresentation;

@end
