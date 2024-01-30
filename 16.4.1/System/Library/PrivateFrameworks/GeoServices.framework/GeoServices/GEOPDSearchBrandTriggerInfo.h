@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchBrandTriggerInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_brandKey;
    unsigned long long _muid;
    unsigned long long _parentMuid;
    NSMutableArray *_triggers;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_muid : 1; unsigned char has_parentMuid : 1; unsigned char read_brandKey : 1; unsigned char read_triggers : 1; unsigned char wrote_anyField : 1; } _flags;
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
