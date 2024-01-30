@class GEOAddressObject, NSString, NSDictionary, GEOLocation, NSURL, GEOPlace;

@interface GEOMapItemAssistant : GEOBaseMapItem {
    GEOLocation *_location;
    NSDictionary *_addressDictionary;
    NSString *_name;
    NSURL *_businessURL;
    NSString *_phoneNumber;
    unsigned long long _muid;
    NSString *_attributionID;
    unsigned int _sampleSizeForUserRatingScore;
    float _normalizedUserRatingScore;
    GEOPlace *_place;
    GEOAddressObject *_addressObject;
}

- (BOOL)_hasMUID;
- (BOOL)_hasResolvablePartialInformation;
- (id)addressObject;
- (unsigned long long)_muid;
- (float)_normalizedUserRatingScore;
- (BOOL)_responseStatusIsIncomplete;
- (BOOL)_hasUserRatingScore;
- (id)initWithWithLocation:(id)a0 addressDictionary:(id)a1 name:(id)a2 businessURL:(id)a3 phoneNumber:(id)a4 sessionID:(id)a5 muid:(unsigned long long)a6 attributionID:(id)a7 sampleSizeForUserRatingScore:(unsigned int)a8 normalizedUserRatingScore:(float)a9;
- (id)_businessURL;
- (id)geoAddress;
- (id)weatherDisplayName;
- (id)addressDictionary;
- (unsigned int)_sampleSizeForUserRatingScore;
- (id)_place;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)description;
- (struct { double x0; double x1; })coordinate;
- (id)name;

@end
