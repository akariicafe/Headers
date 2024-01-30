@class PBUnknownFields, NSMutableArray, PBDataReader;

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

+ (Class)identifierType;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)initWithIdentifiers:(id)a0 resultProviderID:(int)a1;
- (void)addIdentifier:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)clearIdentifiers;
- (id)identifierAtIndex:(unsigned long long)a0;
- (unsigned long long)identifiersCount;

@end
