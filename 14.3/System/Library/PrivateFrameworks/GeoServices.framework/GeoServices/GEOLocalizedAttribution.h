@class NSString, NSMutableArray, PBDataReader;

@interface GEOLocalizedAttribution : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_displayName;
    NSString *_language;
    NSMutableArray *_logoURLs;
    NSMutableArray *_snippetLogoURLs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_displayName : 1; unsigned char read_language : 1; unsigned char read_logoURLs : 1; unsigned char read_snippetLogoURLs : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSMutableArray *logoURLs;
@property (retain, nonatomic) NSMutableArray *snippetLogoURLs;

+ (Class)logoURLsType;
+ (Class)snippetLogoURLsType;
+ (BOOL)isValid:(id)a0;

- (void)clearLogoURLs;
- (id)initWithJSON:(id)a0;
- (void)addLogoURLs:(id)a0;
- (id)init;
- (id)logoURLsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)snippetLogoURLsAtIndex:(unsigned long long)a0;
- (id)bestURLForLogos:(id)a0 scale:(double)a1;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)addSnippetLogoURLs:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearSnippetLogoURLs;
- (id)description;
- (void)copyTo:(id)a0;
- (unsigned long long)logoURLsCount;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)snippetLogoURLsCount;

@end
