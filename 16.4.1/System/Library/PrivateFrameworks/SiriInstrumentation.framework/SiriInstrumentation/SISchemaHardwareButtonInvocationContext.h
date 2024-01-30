@class NSData;

@interface SISchemaHardwareButtonInvocationContext : SISchemaInstrumentationMessage {
    struct { unsigned char hardwareButtonLongPressBehavior : 1; unsigned char hardwareButtonActivationThresholdInSec : 1; } _has;
}

@property (nonatomic) int hardwareButtonLongPressBehavior;
@property (nonatomic) BOOL hasHardwareButtonLongPressBehavior;
@property (nonatomic) float hardwareButtonActivationThresholdInSec;
@property (nonatomic) BOOL hasHardwareButtonActivationThresholdInSec;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteHardwareButtonActivationThresholdInSec;
- (void)deleteHardwareButtonLongPressBehavior;

@end
