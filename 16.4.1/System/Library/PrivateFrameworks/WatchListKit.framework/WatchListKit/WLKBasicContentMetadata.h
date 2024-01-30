@class NSString, NSArray, NSURL, WLKVideo, WLKArtworkVariantListing, NSDictionary, WLKContentRating, NSNumber;

@interface WLKBasicContentMetadata : NSObject {
    NSString *_contentTypeString;
}

@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, copy, nonatomic) NSString *canonicalID;
@property (readonly, copy, nonatomic) NSURL *tvAppDeeplinkURL;
@property (readonly, nonatomic) BOOL isEvod;
@property (readonly, nonatomic, getter=isAppleOriginal) BOOL appleOriginal;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *shortTitle;
@property (readonly, copy, nonatomic) NSString *descriptiveText;
@property (readonly, nonatomic) WLKArtworkVariantListing *images;
@property (readonly, nonatomic) NSNumber *commonSenseRecommendedAge;
@property (readonly, copy, nonatomic) NSArray *categories;
@property (readonly, copy, nonatomic) NSArray *genres;
@property (readonly, nonatomic) WLKVideo *backgroundVideo;
@property (readonly, nonatomic) NSArray *trailers;
@property (readonly, copy, nonatomic) NSDictionary *rolesSummary;
@property (readonly, nonatomic) WLKContentRating *contentRating;

+ (Class)_classForContentType:(unsigned long long)a0;
+ (unsigned long long)contentTypeForString:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
