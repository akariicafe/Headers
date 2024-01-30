@class NSData;

@interface SISchemaServerGeneratedDismissal : PBCodable {
    struct { unsigned char serverGeneratedDismissalReason : 1; } _has;
}

@property (nonatomic) int serverGeneratedDismissalReason;
@property (nonatomic) BOOL hasServerGeneratedDismissalReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
