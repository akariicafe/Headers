@class NSString, NSMutableArray, PBDataReader;

@interface GEORPFeedbackDynamicForm : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_formFields;
    NSMutableArray *_userPaths;
    NSString *_version;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_formFields : 1; unsigned char read_userPaths : 1; unsigned char read_version : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSMutableArray *userPaths;
@property (retain, nonatomic) NSMutableArray *formFields;

+ (Class)userPathsType;
+ (Class)formFieldsType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)userPathsCount;
- (void)clearUserPaths;
- (void)addUserPaths:(id)a0;
- (void)addFormFields:(id)a0;
- (id)userPathsAtIndex:(unsigned long long)a0;
- (unsigned long long)formFieldsCount;
- (void)clearFormFields;
- (id)formFieldsAtIndex:(unsigned long long)a0;
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
