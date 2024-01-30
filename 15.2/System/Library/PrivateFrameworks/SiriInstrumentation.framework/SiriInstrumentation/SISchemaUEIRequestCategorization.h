@class NSData;

@interface SISchemaUEIRequestCategorization : SISchemaInstrumentationMessage {
    struct { unsigned char requestType : 1; unsigned char requestStatus : 1; } _has;
}

@property (nonatomic) int requestType;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestStatus;
@property (nonatomic) BOOL hasRequestStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
