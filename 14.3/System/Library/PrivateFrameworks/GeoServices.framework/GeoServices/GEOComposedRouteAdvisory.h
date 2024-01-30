@class NSArray;
@protocol GEOServerFormattedString;

@interface GEOComposedRouteAdvisory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<GEOServerFormattedString> inlineTitle;
@property (retain, nonatomic) id<GEOServerFormattedString> cardTitle;
@property (retain, nonatomic) id<GEOServerFormattedString> cardDetails;
@property (retain, nonatomic) NSArray *routeIncidents;
@property (nonatomic) BOOL alwaysClickable;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 incidents:(id)a1;
- (id)initWithGeoAdvisoryNotice:(id)a0 incidents:(id)a1;
- (id)initWithGeoAdvisoryNotice:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
