@class NSData, NSString;

@interface PETSchemaPETRawMessage : PBCodable {
    struct { unsigned char type_id : 1; } _has;
}

@property (nonatomic) unsigned int type_id;
@property (nonatomic) BOOL hasType_id;
@property (copy, nonatomic) NSData *raw_bytes;
@property (nonatomic) BOOL hasRaw_bytes;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
