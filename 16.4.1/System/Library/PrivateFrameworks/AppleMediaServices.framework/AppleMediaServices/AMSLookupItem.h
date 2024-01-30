@class NSString, NSArray, NSURL, NSDictionary, NSNumber;

@interface AMSLookupItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *artistName;
@property (readonly, copy, nonatomic) NSArray *artwork;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *categoryNames;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *itemKind;
@property (readonly, copy, nonatomic) NSNumber *iTunesStoreIdentifier;
@property (readonly, copy, nonatomic) NSString *offerName;
@property (readonly, copy, nonatomic) NSArray *offers;
@property (readonly, nonatomic, getter=isPOIBased) BOOL POIBased;
@property (readonly, copy, nonatomic) NSURL *productPageURL;
@property (readonly, nonatomic) long long numberOfUserRatings;
@property (readonly, nonatomic) float userRating;
@property (readonly, nonatomic) long long numberOfUserRatingsForCurrentVersion;
@property (readonly, nonatomic) float userRatingForCurrentVersion;
@property (readonly, nonatomic) NSDictionary *itemDictionary;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLookupDictionary:(id)a0;
- (void).cxx_destruct;

@end
