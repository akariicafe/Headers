@class NSString, NSData;

@interface LTSchemaLocaleConfidence : PBCodable {
    struct { unsigned char confidence : 1; } _has;
}

@property (copy, nonatomic) NSString *locale;
@property (nonatomic) BOOL hasLocale;
@property (nonatomic) unsigned int confidence;
@property (nonatomic) BOOL hasConfidence;
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
