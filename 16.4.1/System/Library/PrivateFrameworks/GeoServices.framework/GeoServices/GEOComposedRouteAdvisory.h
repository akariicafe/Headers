@class GEOPBTransitArtwork, NSArray;
@protocol GEOServerFormattedString;

@interface GEOComposedRouteAdvisory : NSObject <NSSecureCoding, NSCopying> {
    BOOL _initialisedForTransit;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<GEOServerFormattedString> title;
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) BOOL isClickable;
@property (readonly, nonatomic) NSArray *advisoryItems;
@property (readonly, nonatomic) NSArray *analyticsMessageValues;

+ (id)_fallbackAdvisoryArtwork;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_commonInitWithAdvisoryNotice:(id)a0 artwork:(id)a1;
- (id)initWithGeoAdvisoryNotice:(id)a0 incidents:(id)a1;
- (id)initWithGeoAdvisoryNotice:(id)a0 transitIncidents:(id)a1;

@end
