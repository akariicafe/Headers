@class NSString, NSData, SISchemaViewContainer;

@interface SISchemaUUFRPresented : PBCodable {
    struct { unsigned char errorCode : 1; } _has;
}

@property (retain, nonatomic) SISchemaViewContainer *viewContainer;
@property (nonatomic) BOOL hasViewContainer;
@property (copy, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorDomain;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
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
