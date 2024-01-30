@class NSString, NSMutableArray, PBDataReader;

@interface GEOLogMsgStateRAP : PBCodable <NSCopying> {
    PBDataReader *_reader;
    double _duration;
    NSMutableArray *_feedbackFieldOptionKeys;
    NSString *_rapServerManifestVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _entryPoint;
    int _feedbackType;
    struct { unsigned char has_duration : 1; unsigned char has_entryPoint : 1; unsigned char has_feedbackType : 1; unsigned char read_feedbackFieldOptionKeys : 1; unsigned char read_rapServerManifestVersion : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasEntryPoint;
@property (nonatomic) int entryPoint;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) int feedbackType;
@property (retain, nonatomic) NSMutableArray *feedbackFieldOptionKeys;
@property (readonly, nonatomic) BOOL hasRapServerManifestVersion;
@property (retain, nonatomic) NSString *rapServerManifestVersion;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;

+ (BOOL)isValid:(id)a0;
+ (Class)feedbackFieldOptionKeyType;

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
- (id)feedbackTypeAsString:(int)a0;
- (int)StringAsFeedbackType:(id)a0;
- (void)addFeedbackFieldOptionKey:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)feedbackFieldOptionKeysCount;
- (void)clearFeedbackFieldOptionKeys;
- (id)feedbackFieldOptionKeyAtIndex:(unsigned long long)a0;
- (id)entryPointAsString:(int)a0;
- (int)StringAsEntryPoint:(id)a0;
- (id)dictionaryRepresentation;

@end
