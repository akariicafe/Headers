@class NSCache;

@interface _NBMetadataHelper : NSObject

@property (retain, nonatomic) NSCache *metadataCache;

+ (BOOL)hasValue:(id)a0;
+ (id)CCode2CNMap;
+ (id)CN2CCodeMap;
+ (id)countryCodeFromRegionCode:(id)a0;
+ (id)jsonObjectFromZippedDataWithBytes:(char *)a0 compressedLength:(unsigned long long)a1 expandedLength:(unsigned long long)a2;
+ (id)phoneNumberDataMap;
+ (id)regionCodeFromCountryCode:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)getAllMetadata;
- (id)getMetadataForNonGeographicalRegion:(id)a0;
- (id)getMetadataForRegion:(id)a0;

@end
