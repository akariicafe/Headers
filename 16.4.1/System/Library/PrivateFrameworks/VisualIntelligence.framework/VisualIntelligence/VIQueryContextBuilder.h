@class NSString, NSArray, NSURL, CLLocation;
@protocol MTLDevice;

@interface VIQueryContextBuilder : NSObject {
    unsigned long long _queryID;
    NSString *_applicationIdentifier;
    double _uiScale;
    NSString *_teamID;
    NSArray *_catalogIDs;
    CLLocation *_location;
    NSURL *_imageURL;
    NSURL *_referralURL;
    long long _imageType;
    NSString *_featureIdentifier;
    id<MTLDevice> _preferredMetalDevice;
    BOOL _includeLowConfidenceRegions;
    NSString *_locale;
    NSString *_countryCode;
}

- (id)setCountryCode:(id)a0;
- (id)setImageType:(long long)a0;
- (id)build;
- (id)setQueryID:(unsigned long long)a0;
- (id)setLocale:(id)a0;
- (id)setImageURL:(id)a0;
- (id)setLocation:(id)a0;
- (void).cxx_destruct;
- (id)setTeamID:(id)a0;
- (id)setFeatureIdentifier:(id)a0;
- (id)setPreferredMetalDevice:(id)a0;
- (id)setUIScale:(double)a0;
- (id)setReferralURL:(id)a0;
- (id)setCatalogIDs:(id)a0;
- (id)setIncludeLowConfidenceRegions:(BOOL)a0;
- (id)setApplicationIdentifer:(id)a0;

@end
