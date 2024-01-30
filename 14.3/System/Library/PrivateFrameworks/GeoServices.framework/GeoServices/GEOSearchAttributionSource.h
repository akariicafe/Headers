@class NSString, NSMutableArray, PBDataReader;

@interface GEOSearchAttributionSource : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _attributionRequirements;
    struct { int *list; unsigned long long count; unsigned long long size; } _suppressAttributionLogos;
    NSString *_appAdamID;
    NSMutableArray *_attributionApps;
    NSMutableArray *_localizedAttributions;
    NSString *_sourceIdentifier;
    NSMutableArray *_supportedComponentActions;
    NSString *_webBaseActionURL;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _sourceVersion;
    BOOL _enforceAppStore;
    struct { unsigned char has_enforceAppStore : 1; unsigned char read_attributionRequirements : 1; unsigned char read_suppressAttributionLogos : 1; unsigned char read_appAdamID : 1; unsigned char read_attributionApps : 1; unsigned char read_localizedAttributions : 1; unsigned char read_sourceIdentifier : 1; unsigned char read_supportedComponentActions : 1; unsigned char read_webBaseActionURL : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) unsigned int sourceVersion;
@property (retain, nonatomic) NSMutableArray *localizedAttributions;
@property (readonly, nonatomic) unsigned long long attributionRequirementsCount;
@property (readonly, nonatomic) int *attributionRequirements;
@property (retain, nonatomic) NSMutableArray *attributionApps;
@property (readonly, nonatomic) BOOL hasWebBaseActionURL;
@property (retain, nonatomic) NSString *webBaseActionURL;
@property (retain, nonatomic) NSMutableArray *supportedComponentActions;
@property (nonatomic) BOOL hasEnforceAppStore;
@property (nonatomic) BOOL enforceAppStore;
@property (readonly, nonatomic) BOOL hasAppAdamID;
@property (retain, nonatomic) NSString *appAdamID;
@property (readonly, nonatomic) unsigned long long suppressAttributionLogosCount;
@property (readonly, nonatomic) int *suppressAttributionLogos;

+ (Class)localizedAttributionType;
+ (Class)attributionAppsType;
+ (Class)supportedComponentActionsType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)setSuppressAttributionLogos:(int *)a0 count:(unsigned long long)a1;
- (void)addSuppressAttributionLogos:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearSuppressAttributionLogos;
- (void)mergeFrom:(id)a0;
- (void)clearSupportedComponentActions;
- (id)attributionAppsAtIndex:(unsigned long long)a0;
- (id)localizedAttributionAtIndex:(unsigned long long)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)attributionRequirementsAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)clearLocalizedAttributions;
- (void)writeTo:(id)a0;
- (BOOL)canSuppressActionForComponent:(int)a0;
- (void)addAttributionRequirements:(int)a0;
- (id)description;
- (int)attributionRequirementsAtIndex:(unsigned long long)a0;
- (BOOL)supportsAction:(int)a0 forComponent:(int)a1;
- (void)copyTo:(id)a0;
- (void)addLocalizedAttribution:(id)a0;
- (void)setAttributionRequirements:(int *)a0 count:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsSuppressAttributionLogos:(id)a0;
- (int)StringAsAttributionRequirements:(id)a0;
- (int)suppressAttributionLogosAtIndex:(unsigned long long)a0;
- (unsigned long long)attributionAppsCount;
- (id)suppressAttributionLogosAsString:(int)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)localizedAttributionsCount;
- (void)addAttributionApps:(id)a0;
- (BOOL)canLocallyHandleAction:(int)a0 forComponent:(int)a1;
- (void)clearAttributionApps;
- (id)bestLocalizedAttribution;
- (id)supportedComponentActionsAtIndex:(unsigned long long)a0;
- (unsigned long long)supportedComponentActionsCount;
- (void)addSupportedComponentActions:(id)a0;
- (void)clearAttributionRequirements;

@end
