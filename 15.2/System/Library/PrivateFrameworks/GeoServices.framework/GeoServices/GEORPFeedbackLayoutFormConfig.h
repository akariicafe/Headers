@class NSMutableArray;

@interface GEORPFeedbackLayoutFormConfig : PBCodable <NSCopying> {
    NSMutableArray *_layoutFields;
    int _formType;
    unsigned int _radius;
    unsigned int _ttl;
    BOOL _enabled;
    struct { unsigned char has_formType : 1; unsigned char has_radius : 1; unsigned char has_ttl : 1; unsigned char has_enabled : 1; } _flags;
}

@property (nonatomic) BOOL hasTtl;
@property (nonatomic) unsigned int ttl;
@property (nonatomic) BOOL hasFormType;
@property (nonatomic) int formType;
@property (retain, nonatomic) NSMutableArray *layoutFields;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasRadius;
@property (nonatomic) unsigned int radius;

+ (BOOL)isValid:(id)a0;
+ (Class)layoutFieldType;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)formTypeAsString:(int)a0;
- (int)StringAsFormType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addLayoutField:(id)a0;
- (unsigned long long)layoutFieldsCount;
- (void)clearLayoutFields;
- (id)layoutFieldAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
