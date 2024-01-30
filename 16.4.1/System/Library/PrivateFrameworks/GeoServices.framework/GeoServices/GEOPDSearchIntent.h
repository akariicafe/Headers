@class GEOPDSearchCategoryIntent, GEOPDSearchGeoIntent, GEOPDSearchKeywordIntent, GEOPDSearchAttributeIntent, GEOPDSearchChainIntent, NSMutableArray, GEOPDSearchBusinessIntent, GEOPDSearchLocationIntent, GEOPDSearchProximityIntent, GEOPDSearchDirectionIntent, PBDataReader, GEOPDSearchClientResolvedIntent, GEOPDSearchTransitIntent, GEOPDSearchPhoneNumberIntent, GEOPDSearchSearchFilterIntent;

@interface GEOPDSearchIntent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDSearchAttributeIntent *_attributeIntent;
    GEOPDSearchBusinessIntent *_businessIntent;
    GEOPDSearchCategoryIntent *_categoryIntent;
    GEOPDSearchChainIntent *_chainIntent;
    GEOPDSearchClientResolvedIntent *_clientResolvedIntent;
    GEOPDSearchDirectionIntent *_directionIntent;
    GEOPDSearchGeoIntent *_geoIntent;
    GEOPDSearchKeywordIntent *_keywordIntent;
    NSMutableArray *_languageCodes;
    GEOPDSearchLocationIntent *_locationIntent;
    GEOPDSearchPhoneNumberIntent *_phoneNumberIntent;
    GEOPDSearchProximityIntent *_proximityIntent;
    GEOPDSearchSearchFilterIntent *_searchFilterIntent;
    GEOPDSearchTransitIntent *_transitIntent;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _intentSpanIndex;
    int _intentType;
    struct { unsigned char has_intentSpanIndex : 1; unsigned char has_intentType : 1; unsigned char read_attributeIntent : 1; unsigned char read_businessIntent : 1; unsigned char read_categoryIntent : 1; unsigned char read_chainIntent : 1; unsigned char read_clientResolvedIntent : 1; unsigned char read_directionIntent : 1; unsigned char read_geoIntent : 1; unsigned char read_keywordIntent : 1; unsigned char read_languageCodes : 1; unsigned char read_locationIntent : 1; unsigned char read_phoneNumberIntent : 1; unsigned char read_proximityIntent : 1; unsigned char read_searchFilterIntent : 1; unsigned char read_transitIntent : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
