@class NSMutableArray;

@interface GEOJunctionViewGuidanceFeedback : PBCodable <NSCopying> {
    NSMutableArray *_imageIDs;
    BOOL _imageDisplayed;
    struct { unsigned char has_imageDisplayed : 1; } _flags;
}

@property (nonatomic) BOOL hasImageDisplayed;
@property (nonatomic) BOOL imageDisplayed;
@property (retain, nonatomic) NSMutableArray *imageIDs;

+ (BOOL)isValid:(id)a0;
+ (Class)imageIDType;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)addImageID:(id)a0;
- (unsigned long long)imageIDsCount;
- (void)clearImageIDs;
- (id)imageIDAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
