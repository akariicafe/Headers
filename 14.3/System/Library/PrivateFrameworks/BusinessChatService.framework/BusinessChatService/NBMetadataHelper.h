@class NSCache;

@interface NBMetadataHelper : NSObject

@property (retain, nonatomic) NSCache *metadataCache;

+ (id)jsonObjectFromZippedDataWithBytes:(char *)a0 compressedLength:(unsigned long long)a1 expandedLength:(unsigned long long)a2;
+ (id)CN2CCodeMap;
+ (id)phoneNumberDataMap;
+ (id)CCode2CNMap;
+ (id)regionCodeFromCountryCode:(id)a0;
+ (id)countryCodeFromRegionCode:(id)a0;
+ (BOOL)hasValue:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)getMetadataForRegion:(id)a0;
- (id)getAllMetadata;
- (id)getMetadataForNonGeographicalRegion:(id)a0;

@end
