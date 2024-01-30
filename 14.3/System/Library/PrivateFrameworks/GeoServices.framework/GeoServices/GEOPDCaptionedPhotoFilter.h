@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPDCaptionedPhotoFilter : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOPDPhotoSizeFilterValue { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *_photoSizeFilters;
    unsigned long long _photoSizeFiltersCount;
    unsigned long long _photoSizeFiltersSpace;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_photoSizeFilters : 1; unsigned char read_vendorId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long photoSizeFiltersCount;
@property (readonly, nonatomic) struct GEOPDPhotoSizeFilterValue { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *photoSizeFilters;
@property (readonly, nonatomic) BOOL hasVendorId;
@property (retain, nonatomic) NSString *vendorId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (id)description;
- (void)copyTo:(id)a0;
- (void)addPhotoSizeFilter:(struct GEOPDPhotoSizeFilterValue { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)setPhotoSizeFilters:(struct GEOPDPhotoSizeFilterValue { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *)a0 count:(unsigned long long)a1;
- (id)initWithDictionary:(id)a0;
- (struct GEOPDPhotoSizeFilterValue { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })photoSizeFilterAtIndex:(unsigned long long)a0;
- (void)clearPhotoSizeFilters;

@end
