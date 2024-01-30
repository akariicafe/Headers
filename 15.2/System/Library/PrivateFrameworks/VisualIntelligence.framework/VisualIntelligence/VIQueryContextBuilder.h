@class NSString, CLLocation, NSURL;
@protocol MTLDevice;

@interface VIQueryContextBuilder : NSObject {
    unsigned long long _queryID;
    NSString *_applicationIdentifier;
    double _uiScale;
    CLLocation *_location;
    NSURL *_imageURL;
    NSURL *_referralURL;
    long long _imageType;
    NSString *_featureIdentifier;
    id<MTLDevice> _preferredMetalDevice;
}

- (id)setQueryID:(unsigned long long)a0;
- (id)setFeatureIdentifier:(id)a0;
- (id)setPreferredMetalDevice:(id)a0;
- (id)setImageType:(long long)a0;
- (id)build;
- (void).cxx_destruct;
- (id)setImageURL:(id)a0;
- (id)setLocation:(id)a0;
- (id)setReferralURL:(id)a0;
- (id)setUIScale:(double)a0;
- (id)setApplicationIdentifer:(id)a0;

@end
