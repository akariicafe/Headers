@class NSMutableArray;

@interface GEORPFeedbackLayoutFormConfig : PBCodable <NSCopying> {
    NSMutableArray *_layoutFields;
    int _formType;
    unsigned int _ttl;
    BOOL _enabled;
    struct { unsigned char has_formType : 1; unsigned char has_ttl : 1; unsigned char has_enabled : 1; } _flags;
}

@property (nonatomic) BOOL hasTtl;
@property (nonatomic) unsigned int ttl;
@property (nonatomic) BOOL hasFormType;
@property (nonatomic) int formType;
@property (retain, nonatomic) NSMutableArray *layoutFields;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL enabled;

+ (Class)layoutFieldType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)formTypeAsString:(int)a0;
- (int)StringAsFormType:(id)a0;
- (void)addLayoutField:(id)a0;
- (unsigned long long)layoutFieldsCount;
- (void)clearLayoutFields;
- (id)layoutFieldAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
