@class SISchemaLocation, NSString, NSData;

@interface SISchemaDeviceDynamicContext : PBCodable {
    struct { unsigned char timeIntervalSince1970 : 1; } _has;
}

@property (retain, nonatomic) SISchemaLocation *location;
@property (nonatomic) BOOL hasLocation;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) BOOL hasCountryCode;
@property (nonatomic) double timeIntervalSince1970;
@property (nonatomic) BOOL hasTimeIntervalSince1970;
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
