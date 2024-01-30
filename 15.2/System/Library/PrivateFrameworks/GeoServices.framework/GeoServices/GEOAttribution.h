@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOAttribution : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *_regions;
    unsigned long long _regionsCount;
    unsigned long long _regionsSpace;
    NSString *_badgeChecksum;
    NSString *_badge;
    NSString *_logoChecksum;
    NSString *_logo;
    NSString *_name;
    NSMutableArray *_resources;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _dataSet;
    unsigned int _linkDisplayStringIndex;
    struct { unsigned char has_dataSet : 1; unsigned char has_linkDisplayStringIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_regions : 1; unsigned char read_badgeChecksum : 1; unsigned char read_badge : 1; unsigned char read_logoChecksum : 1; unsigned char read_logo : 1; unsigned char read_name : 1; unsigned char read_resources : 1; unsigned char read_url : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasBadge;
@property (retain, nonatomic) NSString *badge;
@property (readonly, nonatomic) BOOL hasLogo;
@property (retain, nonatomic) NSString *logo;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) BOOL hasBadgeChecksum;
@property (retain, nonatomic) NSString *badgeChecksum;
@property (readonly, nonatomic) BOOL hasLogoChecksum;
@property (retain, nonatomic) NSString *logoChecksum;
@property (retain, nonatomic) NSMutableArray *resources;
@property (readonly, nonatomic) unsigned long long regionsCount;
@property (readonly, nonatomic) struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *regions;
@property (nonatomic) BOOL hasDataSet;
@property (nonatomic) unsigned int dataSet;
@property (nonatomic) BOOL hasLinkDisplayStringIndex;
@property (nonatomic) unsigned int linkDisplayStringIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)resourceType;
+ (BOOL)isValid:(id)a0;

- (id)resourceAtIndex:(unsigned long long)a0;
- (unsigned long long)resourcesCount;
- (void)setRegions:(struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 count:(unsigned long long)a1;
- (void)readAll:(BOOL)a0;
- (void)addResource:(id)a0;
- (void)clearResources;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearRegions;
- (void)addRegion:(struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })regionAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
