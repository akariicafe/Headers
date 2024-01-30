@class NSString, NSData;

@interface SISchemaClientTransportEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char eventTransmittedRelativeToBootTimeTimestampNs : 1; unsigned char serverArrivedTimestampNs : 1; } _has;
}

@property (copy, nonatomic) NSString *eventTransmittedTimestampRefId;
@property (nonatomic) BOOL hasEventTransmittedTimestampRefId;
@property (nonatomic) long long eventTransmittedRelativeToBootTimeTimestampNs;
@property (nonatomic) BOOL hasEventTransmittedRelativeToBootTimeTimestampNs;
@property (nonatomic) long long serverArrivedTimestampNs;
@property (nonatomic) BOOL hasServerArrivedTimestampNs;
@property (copy, nonatomic) NSString *arrivedServerPod;
@property (nonatomic) BOOL hasArrivedServerPod;
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
