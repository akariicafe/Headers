@class NSString, NSArray, NSURL, NSDictionary, NSNumber;

@interface SSLookupItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSArray *artwork;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSArray *categoryNames;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *itemKind;
@property (readonly, nonatomic) NSNumber *ITunesStoreIdentifier;
@property (readonly, nonatomic) NSArray *offers;
@property (readonly, nonatomic, getter=isPOIBased) BOOL POIBased;
@property (readonly, nonatomic) NSURL *productPageURL;
@property (readonly, nonatomic) long long numberOfUserRatings;
@property (readonly, nonatomic) float userRating;
@property (readonly, nonatomic) long long numberOfUserRatingsForCurrentVersion;
@property (readonly, nonatomic) float userRatingForCurrentVersion;
@property (readonly, nonatomic) NSDictionary *lookupDictionary;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithLookupDictionary:(id)a0;

@end
