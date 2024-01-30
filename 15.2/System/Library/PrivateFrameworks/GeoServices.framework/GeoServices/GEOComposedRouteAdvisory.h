@class NSArray, GEOPBTransitArtwork;
@protocol GEOServerFormattedString;

@interface GEOComposedRouteAdvisory : NSObject <NSSecureCoding, NSCopying> {
    NSArray *routeAdvisoryCards;
    BOOL _initialisedForTransit;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<GEOServerFormattedString> inlineTitle;
@property (retain, nonatomic) NSArray *routeIncidents;
@property (retain, nonatomic) NSArray *routeAdvisoryCards;
@property (nonatomic) BOOL alwaysClickable;
@property (readonly, nonatomic) id<GEOServerFormattedString> title;
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) BOOL isClickable;
@property (readonly, nonatomic) NSArray *advisoryItems;
@property (readonly, nonatomic) NSArray *analyticsMessageValues;

+ (id)_fallbackAdvisoryArtwork;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithMessage:(id)a0 incidents:(id)a1;
- (id)initWithGeoAdvisoryNotice:(id)a0 transitIncidents:(id)a1;
- (id)initWithGeoAdvisoryNotice:(id)a0 incidents:(id)a1;
- (id)initWithGeoAdvisoryNotice:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
