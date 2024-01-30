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

+ (void)markMMStrings:(BOOL)a0;
+ (id)libraryVersion;
+ (id)addressObjectWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3;
+ (void)setLoggingDebug:(BOOL)a0;
+ (id)addressObjectForPlaceData:(id)a0;
+ (BOOL)isLoggingDebug;
+ (BOOL)isMarkingMMStrings;

- (id)rawBytes;
- (id)addressDictionary;
- (id)spokenStructuredAddress;
- (id)fullAddressWithMultiline:(BOOL)a0;
- (id)venueLevel;
- (id)countryName;
- (id)weatherDisplayName;
- (id)phoneticName;
- (id)initWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3 language:(id)a4 country:(id)a5 phoneticLocale:(id)a6;
- (id)cityDisplayNameWithFallback:(BOOL)a0;
- (id)parkingDisplayName;
- (id)phoneticAddress;
- (id)venueLabel:(long long)a0;
- (id)venueShortAddress;
- (id)address;
- (void)dealloc;
- (id)spokenAddress;
- (id)shortAddress;
- (BOOL)isEqual:(id)a0;
- (id)initWithCurrentCountry;
- (id)spokenAddressForLocale:(id)a0;
- (id)titlesForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithContactAddressDictionary:(id)a0 langauge:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)weatherLocationName;
- (id)cnPostalAddress;
- (id)spokenName;
- (id)locationAddress;
- (id)venueLabel;
- (id)fullAddressWithMultiline:(BOOL)a0 relative:(id)a1;
- (void).cxx_destruct;
- (id)phoneticLocaleIdentifier;
- (id)initWithCNPostalAddress:(id)a0 langauge:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)name;
- (id)fullAddressNoCurrentCountryWithMultiline:(BOOL)a0;

@end
