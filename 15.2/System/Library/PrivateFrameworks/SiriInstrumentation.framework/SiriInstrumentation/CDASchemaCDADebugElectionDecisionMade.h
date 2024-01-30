@class NSArray, NSData;

@interface CDASchemaCDADebugElectionDecisionMade : SISchemaInstrumentationMessage {
    struct { unsigned char isCrossDeviceArbitrationAllowed : 1; unsigned char deviceGroup : 1; } _has;
}

@property (nonatomic) BOOL isCrossDeviceArbitrationAllowed;
@property (nonatomic) BOOL hasIsCrossDeviceArbitrationAllowed;
@property (copy, nonatomic) NSArray *advertisementDatas;
@property (nonatomic) unsigned int deviceGroup;
@property (nonatomic) BOOL hasDeviceGroup;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addAdvertisementData:(id)a0;
- (void)clearAdvertisementData;
- (unsigned long long)advertisementDataCount;
- (id)advertisementDataAtIndex:(unsigned long long)a0;

@end
