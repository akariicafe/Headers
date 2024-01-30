@class NSString, GEOPDRatingCategory;

@interface GEOAppleRatingCategory : NSObject {
    GEOPDRatingCategory *_ratingCategory;
}

@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *key;

- (void).cxx_destruct;
- (id)initWithRatingCategory:(id)a0;

@end
