@class NSData;

@interface SISchemaLocation : SISchemaInstrumentationMessage {
    struct { unsigned char latitude : 1; unsigned char longitude : 1; unsigned char horizontalAccuracyInMeters : 1; } _has;
}

@property (nonatomic) float latitude;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) float longitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) float horizontalAccuracyInMeters;
@property (nonatomic) BOOL hasHorizontalAccuracyInMeters;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteLongitude;
- (void)deleteHorizontalAccuracyInMeters;
- (void)deleteLatitude;

@end
