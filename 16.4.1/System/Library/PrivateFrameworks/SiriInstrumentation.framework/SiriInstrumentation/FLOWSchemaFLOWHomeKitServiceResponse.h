@class NSData;

@interface FLOWSchemaFLOWHomeKitServiceResponse : SISchemaInstrumentationMessage {
    struct { unsigned char homeKitServiceType : 1; unsigned char numServicesCompleted : 1; unsigned char numServicesFailed : 1; } _has;
}

@property (nonatomic) int homeKitServiceType;
@property (nonatomic) BOOL hasHomeKitServiceType;
@property (nonatomic) int numServicesCompleted;
@property (nonatomic) BOOL hasNumServicesCompleted;
@property (nonatomic) int numServicesFailed;
@property (nonatomic) BOOL hasNumServicesFailed;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteHomeKitServiceType;
- (void)deleteNumServicesCompleted;
- (void)deleteNumServicesFailed;

@end
