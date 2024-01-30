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

+ (void)setLoggingDebug:(BOOL)a0;
+ (BOOL)isLoggingDebug;
+ (id)addressObjectWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3;
+ (void)markMMStrings:(BOOL)a0;
+ (BOOL)isMarkingMMStrings;
+ (id)libraryVersion;
+ (id)addressObjectForPlaceData:(id)a0;

- (id)spokenName;
- (id)weatherDisplayName;
- (id)phoneticName;
- (id)addressDictionary;
- (void).cxx_destruct;
- (id)phoneticAddress;
- (id)venueShortAddress;
- (id)parkingDisplayName;
- (void)dealloc;
- (id)address;
- (id)rawBytes;
- (id)titlesForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithContactAddressDictionary:(id)a0 langauge:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)spokenAddressForLocale:(id)a0;
- (id)spokenAddress;
- (id)fullAddressWithMultiline:(BOOL)a0;
- (id)venueLabel:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)weatherLocationName;
- (id)shortAddress;
- (id)phoneticLocaleIdentifier;
- (id)initWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3 language:(id)a4 country:(id)a5 phoneticLocale:(id)a6;
- (id)initWithCNPostalAddress:(id)a0 langauge:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)cnPostalAddress;
- (id)fullAddressWithMultiline:(BOOL)a0 relative:(id)a1;
- (id)name;
- (id)initWithCurrentCountry;
- (id)fullAddressNoCurrentCountryWithMultiline:(BOOL)a0;
- (id)venueLevel;
- (id)cityDisplayNameWithFallback:(BOOL)a0;
- (id)spokenStructuredAddress;
- (id)venueLabel;

@end
