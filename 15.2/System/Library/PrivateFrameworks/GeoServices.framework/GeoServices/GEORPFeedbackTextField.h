@class NSString, PBDataReader;

@interface GEORPFeedbackTextField : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_edited;
    NSString *_original;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_edited : 1; unsigned char read_original : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasOriginal;
@property (retain, nonatomic) NSString *original;
@property (readonly, nonatomic) BOOL hasEdited;
@property (retain, nonatomic) NSString *edited;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
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
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
