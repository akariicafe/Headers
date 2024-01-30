@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDSiriSearchResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_disambiguationLabels;
    NSMutableArray *_resultDetourInfos;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isChainResultSet;
    struct { unsigned char has_isChainResultSet : 1; unsigned char read_unknownFields : 1; unsigned char read_disambiguationLabels : 1; unsigned char read_resultDetourInfos : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *disambiguationLabels;
@property (retain, nonatomic) NSMutableArray *resultDetourInfos;
@property (nonatomic) BOOL hasIsChainResultSet;
@property (nonatomic) BOOL isChainResultSet;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)disambiguationLabelType;
+ (Class)resultDetourInfoType;
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
- (void)addDisambiguationLabel:(id)a0;
- (unsigned long long)disambiguationLabelsCount;
- (void)clearDisambiguationLabels;
- (id)disambiguationLabelAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)addResultDetourInfo:(id)a0;
- (unsigned long long)resultDetourInfosCount;
- (void)clearResultDetourInfos;
- (id)resultDetourInfoAtIndex:(unsigned long long)a0;

@end
