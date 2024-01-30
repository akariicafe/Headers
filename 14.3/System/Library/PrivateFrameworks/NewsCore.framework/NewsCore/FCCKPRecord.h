@class FCCKPDateStatistics, NSString, FCCKPRecordType, FCCKPIdentifier, FCCKPRecordIdentifier, NSMutableArray;

@interface FCCKPRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (retain, nonatomic) FCCKPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) FCCKPRecordType *type;
@property (readonly, nonatomic) BOOL hasCreatedBy;
@property (retain, nonatomic) FCCKPIdentifier *createdBy;
@property (readonly, nonatomic) BOOL hasTimeStatistics;
@property (retain, nonatomic) FCCKPDateStatistics *timeStatistics;
@property (retain, nonatomic) NSMutableArray *fields;
@property (readonly, nonatomic) BOOL hasModifiedBy;
@property (retain, nonatomic) FCCKPIdentifier *modifiedBy;
@property (retain, nonatomic) NSMutableArray *conflictLoserEtags;
@property (readonly, nonatomic) BOOL hasModifiedByDevice;
@property (retain, nonatomic) NSString *modifiedByDevice;

+ (Class)fieldsType;
+ (Class)conflictLoserEtagsType;

- (id)fieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)fieldsCount;
- (void)clearFields;
- (void)addFields:(id)a0;
- (unsigned long long)conflictLoserEtagsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addConflictLoserEtags:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearConflictLoserEtags;

@end
