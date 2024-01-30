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

- (id)initWithWithLocation:(id)a0 addressDictionary:(id)a1 name:(id)a2 businessURL:(id)a3 phoneNumber:(id)a4 sessionID:(id)a5 muid:(unsigned long long)a6 attributionID:(id)a7 sampleSizeForUserRatingScore:(unsigned int)a8 normalizedUserRatingScore:(float)a9;
- (unsigned int)_sampleSizeForUserRatingScore;
- (struct { double x0; double x1; })coordinate;
- (id)weatherDisplayName;
- (unsigned long long)_muid;
- (BOOL)_hasResolvablePartialInformation;
- (id)description;
- (BOOL)_hasUserRatingScore;
- (id)_place;
- (void).cxx_destruct;
- (id)_businessURL;
- (id)addressDictionary;
- (id)name;
- (id)geoAddress;
- (float)_normalizedUserRatingScore;
- (BOOL)_responseStatusIsIncomplete;
- (BOOL)_hasMUID;
- (BOOL)isValid;
- (id)addressObject;

@end
