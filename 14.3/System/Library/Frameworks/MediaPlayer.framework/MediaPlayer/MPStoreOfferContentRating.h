@class NSString, NSDictionary;

@interface MPStoreOfferContentRating : NSObject <NSCoding> {
    NSDictionary *_dictionary;
}

@property (nonatomic) long long ratingLevel;
@property (copy, nonatomic) NSString *ratingLabel;
@property (nonatomic) unsigned long long ratingSystem;
@property (copy, nonatomic) NSString *ratingDescription;
@property (readonly, nonatomic, getter=isRestrictedContent) BOOL restrictedContent;
@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly, nonatomic, getter=isRestrictedPurchase) BOOL restrictedPurchase;
@property (readonly, nonatomic) id mediaPropertyContentRatingValue;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)ratingSystemFromString:(id)a0;

- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isRatingSystemForApps:(unsigned long long)a0;
- (BOOL)_isRatingSystemForMovies:(unsigned long long)a0;
- (BOOL)_isRatingSystemForMusic:(unsigned long long)a0;
- (BOOL)_isRatingSystemForTV:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
