@class NSData;

@interface IHSchemaIHScore : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char upperBoundary : 1; unsigned char lowerBoundary : 1; } _has;
}

@property (nonatomic) float score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) float upperBoundary;
@property (nonatomic) BOOL hasUpperBoundary;
@property (nonatomic) float lowerBoundary;
@property (nonatomic) BOOL hasLowerBoundary;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteLowerBoundary;
- (void)deleteScore;
- (void)deleteUpperBoundary;

@end
