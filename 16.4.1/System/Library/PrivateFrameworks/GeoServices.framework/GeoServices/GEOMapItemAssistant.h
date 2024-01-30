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

- (unsigned long long)_muid;
- (id)geoAddress;
- (BOOL)_hasUserRatingScore;
- (id)addressDictionary;
- (BOOL)_hasResolvablePartialInformation;
- (id)_businessURL;
- (unsigned int)_sampleSizeForUserRatingScore;
- (BOOL)_responseStatusIsIncomplete;
- (id)_place;
- (BOOL)_hasMUID;
- (id)weatherDisplayName;
- (float)_normalizedUserRatingScore;
- (id)addressObject;
- (struct { double x0; double x1; })coordinate;
- (BOOL)isValid;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (id)initWithWithLocation:(id)a0 addressDictionary:(id)a1 name:(id)a2 businessURL:(id)a3 phoneNumber:(id)a4 sessionID:(id)a5 muid:(unsigned long long)a6 attributionID:(id)a7 sampleSizeForUserRatingScore:(unsigned int)a8 normalizedUserRatingScore:(float)a9;

@end
