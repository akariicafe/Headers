@class NSData, NSString;

@interface SISchemaServerEventMetadata : PBCodable {
    struct { unsigned char timestampNs : 1; } _has;
}

@property (copy, nonatomic) NSData *turnID;
@property (nonatomic) BOOL hasTurnID;
@property (nonatomic) long long timestampNs;
@property (nonatomic) BOOL hasTimestampNs;
@property (copy, nonatomic) NSData *siriDeviceID;
@property (nonatomic) BOOL hasSiriDeviceID;
@property (copy, nonatomic) NSString *serverPod;
@property (nonatomic) BOOL hasServerPod;
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
