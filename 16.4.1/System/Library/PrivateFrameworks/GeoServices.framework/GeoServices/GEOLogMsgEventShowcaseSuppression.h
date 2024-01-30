@class NSString, PBDataReader;

@interface GEOLogMsgEventShowcaseSuppression : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_adamId;
    unsigned long long _businessId;
    NSString *_showcaseId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _localSearchProviderID;
    int _suppressionReason;
    struct { unsigned char has_businessId : 1; unsigned char has_localSearchProviderID : 1; unsigned char has_suppressionReason : 1; unsigned char read_adamId : 1; unsigned char read_showcaseId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasBusinessId;
@property (nonatomic) unsigned long long businessId;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;
@property (readonly, nonatomic) BOOL hasShowcaseId;
@property (retain, nonatomic) NSString *showcaseId;
@property (nonatomic) BOOL hasSuppressionReason;
@property (nonatomic) int suppressionReason;
@property (readonly, nonatomic) BOOL hasAdamId;
@property (retain, nonatomic) NSString *adamId;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
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
- (int)StringAsSuppressionReason:(id)a0;
- (id)suppressionReasonAsString:(int)a0;

@end
