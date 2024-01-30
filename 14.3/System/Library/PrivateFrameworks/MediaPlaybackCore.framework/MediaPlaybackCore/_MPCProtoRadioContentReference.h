@class _MPCProtoRadioContentReferenceLibraryItemContentReference, _MPCProtoRadioContentReferenceLibraryAlbumContentReference, _MPCProtoRadioContentReferenceLibraryArtistContentReference, _MPCProtoRadioContentReferenceStoreContentReference;

@interface _MPCProtoRadioContentReference : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLibraryAlbumContentReference;
@property (retain, nonatomic) _MPCProtoRadioContentReferenceLibraryAlbumContentReference *libraryAlbumContentReference;
@property (readonly, nonatomic) BOOL hasLibraryArtistContentReference;
@property (retain, nonatomic) _MPCProtoRadioContentReferenceLibraryArtistContentReference *libraryArtistContentReference;
@property (readonly, nonatomic) BOOL hasLibraryItemContentReference;
@property (retain, nonatomic) _MPCProtoRadioContentReferenceLibraryItemContentReference *libraryItemContentReference;
@property (readonly, nonatomic) BOOL hasStoreContentReference;
@property (retain, nonatomic) _MPCProtoRadioContentReferenceStoreContentReference *storeContentReference;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
