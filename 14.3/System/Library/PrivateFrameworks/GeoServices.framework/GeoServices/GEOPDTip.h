@class GEOPDTipUser, NSString, PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDTip : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_snippets;
    NSString *_tipId;
    double _tipTime;
    GEOPDTipUser *_tipster;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_tipTime : 1; unsigned char read_unknownFields : 1; unsigned char read_snippets : 1; unsigned char read_tipId : 1; unsigned char read_tipster : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *snippets;
@property (nonatomic) BOOL hasTipTime;
@property (nonatomic) double tipTime;
@property (readonly, nonatomic) BOOL hasTipster;
@property (retain, nonatomic) GEOPDTipUser *tipster;
@property (readonly, nonatomic) BOOL hasTipId;
@property (retain, nonatomic) NSString *tipId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)snippetType;
+ (id)tipsForPlaceData:(id)a0;
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
- (void)addSnippet:(id)a0;
- (unsigned long long)snippetsCount;
- (void)clearSnippets;
- (id)snippetAtIndex:(unsigned long long)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
