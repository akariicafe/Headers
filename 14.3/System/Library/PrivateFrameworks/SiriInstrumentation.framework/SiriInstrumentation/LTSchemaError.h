@class NSString, NSData;

@interface LTSchemaError : PBCodable {
    struct { unsigned char code : 1; } _has;
}

@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) unsigned int code;
@property (nonatomic) BOOL hasCode;
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
