@class NSString, NSArray, NSData;

@interface _PARRevGeoResolution : PBCodable <_PARRevGeoResolution, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *administrativeArea;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *locality;
@property (copy, nonatomic) NSArray *formattedAddressLines;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)formattedAddressLinesCount;
- (void)clearFormattedAddressLines;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addFormattedAddressLines:(id)a0;
- (id)formattedAddressLinesAtIndex:(unsigned long long)a0;

@end
