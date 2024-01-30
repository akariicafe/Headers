@class NSMutableArray, PBDataReader;

@interface GEOLogMsgStatePlaceSummaryLayout : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _muids;
    NSMutableArray *_dynamicContextHyperlinkDetails;
    NSMutableArray *_trailingEntityActionDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_muids : 1; unsigned char read_dynamicContextHyperlinkDetails : 1; unsigned char read_trailingEntityActionDetails : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long muidsCount;
@property (readonly, nonatomic) unsigned long long *muids;
@property (retain, nonatomic) NSMutableArray *trailingEntityActionDetails;
@property (retain, nonatomic) NSMutableArray *dynamicContextHyperlinkDetails;

+ (BOOL)isValid:(id)a0;
+ (Class)trailingEntityActionDetailsType;
+ (Class)dynamicContextHyperlinkDetailsType;

- (id)initWithData:(id)a0;
- (void)setMuids:(unsigned long long *)a0 count:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)clearMuids;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addTrailingEntityActionDetails:(id)a0;
- (void)addDynamicContextHyperlinkDetails:(id)a0;
- (void)addMuids:(unsigned long long)a0;
- (void)clearDynamicContextHyperlinkDetails;
- (void)clearTrailingEntityActionDetails;
- (id)dynamicContextHyperlinkDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)dynamicContextHyperlinkDetailsCount;
- (unsigned long long)muidsAtIndex:(unsigned long long)a0;
- (id)trailingEntityActionDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)trailingEntityActionDetailsCount;

@end
