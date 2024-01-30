@class NSString, _GEOAddressObject;

@interface GEOAddressObject : NSObject <GEOAddressObjectProtocol> {
    _GEOAddressObject *_pimpl;
    int *_knownAccuracy;
}

@property (readonly, nonatomic) NSString *displayLanguage;
@property (readonly, nonatomic) BOOL hasKnownAccuracy;
@property (readonly, nonatomic) int knownAccuracy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addressObjectWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3;
+ (BOOL)isLoggingDebug;
+ (id)addressObjectForPlaceData:(id)a0;
+ (BOOL)isMarkingMMStrings;
+ (void)markMMStrings:(BOOL)a0;
+ (id)libraryVersion;
+ (void)setLoggingDebug:(BOOL)a0;

- (id)shortAddress;
- (id)phoneticName;
- (id)venueLevel;
- (id)initWithCNPostalAddress:(id)a0 langauge:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)address;
- (id)cnPostalAddress;
- (id)cityDisplayNameWithFallback:(BOOL)a0;
- (id)venueLabel;
- (id)spokenAddressForLocale:(id)a0;
- (id)spokenAddress;
- (id)weatherDisplayName;
- (id)countryName;
- (id)titlesForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)spokenStructuredAddress;
- (id)fullAddressNoCurrentCountryWithMultiline:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)venueLabel:(long long)a0;
- (id)addressDictionary;
- (id)initWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3 language:(id)a4 country:(id)a5 phoneticLocale:(id)a6;
- (id)phoneticAddress;
- (id)name;
- (id)locationAddress;
- (id)fullAddressWithMultiline:(BOOL)a0;
- (id)phoneticLocaleIdentifier;
- (id)weatherLocationName;
- (id)spokenName;
- (void)dealloc;
- (id)initWithContactAddressDictionary:(id)a0 langauge:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)rawBytes;
- (id)venueShortAddress;
- (id)parkingDisplayName;
- (id)fullAddressWithMultiline:(BOOL)a0 relative:(id)a1;
- (id)initWithCurrentCountry;

@end
