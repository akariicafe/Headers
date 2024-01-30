@class NSData, NSString;

@interface SISchemaClientEventMetadata : PBCodable {
    struct { unsigned char eventGeneratedRelativeToBootTimeTimestampNs : 1; } _has;
}

@property (copy, nonatomic) NSData *turnID;
@property (nonatomic) BOOL hasTurnID;
@property (copy, nonatomic) NSData *siriDeviceID;
@property (nonatomic) BOOL hasSiriDeviceID;
@property (copy, nonatomic) NSString *eventGeneratedTimestampRefId;
@property (nonatomic) BOOL hasEventGeneratedTimestampRefId;
@property (nonatomic) long long eventGeneratedRelativeToBootTimeTimestampNs;
@property (nonatomic) BOOL hasEventGeneratedRelativeToBootTimeTimestampNs;
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
