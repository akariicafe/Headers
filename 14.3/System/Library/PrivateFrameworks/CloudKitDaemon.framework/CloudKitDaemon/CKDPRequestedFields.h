@class NSMutableArray;

@interface CKDPRequestedFields : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *fields;
@property (retain, nonatomic) NSMutableArray *listFields;

+ (Class)fieldsType;
+ (Class)listFieldType;

- (id)fieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)fieldsCount;
- (void)clearFields;
- (void)addFields:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (void)addListField:(id)a0;
- (unsigned long long)listFieldsCount;
- (void)clearListFields;
- (id)listFieldAtIndex:(unsigned long long)a0;

@end
