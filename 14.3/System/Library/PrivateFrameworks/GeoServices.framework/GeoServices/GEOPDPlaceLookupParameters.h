@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDPlaceLookupParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _muids;
    NSMutableArray *_identifiers;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _resultProviderId;
    BOOL _enablePartialClientization;
    struct { unsigned char has_resultProviderId : 1; unsigned char has_enablePartialClientization : 1; unsigned char read_unknownFields : 1; unsigned char read_muids : 1; unsigned char read_identifiers : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *identifiers;
@property (nonatomic) BOOL hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (readonly, nonatomic) unsigned long long muidsCount;
@property (readonly, nonatomic) unsigned long long *muids;
@property (nonatomic) BOOL hasEnablePartialClientization;
@property (nonatomic) BOOL enablePartialClientization;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)identifierType;
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
- (void)addMuid:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifiers:(id)a0 resultProviderID:(int)a1;
- (unsigned long long)muidAtIndex:(unsigned long long)a0;
- (void)setMuids:(unsigned long long *)a0 count:(unsigned long long)a1;
- (unsigned long long)identifiersCount;
- (void)clearIdentifiers;
- (void)addIdentifier:(id)a0;
- (id)identifierAtIndex:(unsigned long long)a0;
- (void)clearMuids;

@end
