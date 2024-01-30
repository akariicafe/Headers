@class NSArray, SISchemaSiriResponseContext, NSData;

@interface SISchemaUUFRCompletion : PBCodable {
    struct { unsigned char completionStatus : 1; } _has;
}

@property (nonatomic) int completionStatus;
@property (nonatomic) BOOL hasCompletionStatus;
@property (copy, nonatomic) NSArray *homeKitAccessoryResponses;
@property (retain, nonatomic) SISchemaSiriResponseContext *siriResponseContext;
@property (nonatomic) BOOL hasSiriResponseContext;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addHomeKitAccessoryResponse:(id)a0;
- (void)clearHomeKitAccessoryResponse;
- (unsigned long long)homeKitAccessoryResponseCount;
- (id)homeKitAccessoryResponseAtIndex:(unsigned long long)a0;

@end
