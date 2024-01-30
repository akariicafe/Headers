@class ASRSchemaASRPackage, NSData;

@interface ASRSchemaASRPackageGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char isFinal : 1; } _has;
}

@property (retain, nonatomic) ASRSchemaASRPackage *package;
@property (nonatomic) BOOL hasPackage;
@property (nonatomic) BOOL isFinal;
@property (nonatomic) BOOL hasIsFinal;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
