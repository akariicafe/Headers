@class NSString, NSData;

@interface NETSchemaNETError : SISchemaInstrumentationMessage {
    struct { unsigned char errorCode : 1; } _has;
}

@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL hasDomain;
@property (copy, nonatomic) NSString *description;
@property (nonatomic) BOOL hasDescription;
@property (nonatomic) long long errorCode;
@property (nonatomic) BOOL hasErrorCode;
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
