@class NSMutableArray;

@interface CKDPRequestedFields : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *fields;
@property (retain, nonatomic) NSMutableArray *listFields;

+ (Class)fieldsType;
+ (Class)listFieldType;

- (void)clearListFields;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (void)addListField:(id)a0;
- (void)addFields:(id)a0;
- (unsigned long long)fieldsCount;
- (void)clearFields;
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)listFieldsCount;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)listFieldAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
