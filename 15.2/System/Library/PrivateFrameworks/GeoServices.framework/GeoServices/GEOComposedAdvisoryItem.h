@class NSArray, GEOPBTransitArtwork, NSDate;
@protocol GEOServerFormattedString, GEOTransitIncident;

@interface GEOComposedAdvisoryItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<GEOServerFormattedString> title;
@property (readonly, nonatomic) id<GEOServerFormattedString> subtitle;
@property (readonly, nonatomic) NSDate *dateOfLastUpdate;
@property (readonly, nonatomic) id<GEOServerFormattedString> dateOfLastUpdateDescription;
@property (readonly, nonatomic) NSArray *details;
@property (readonly, nonatomic) id<GEOServerFormattedString> attribution;
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) BOOL isNonTransitIncident;
@property (readonly, nonatomic) id<GEOTransitIncident> transitIncident;
@property (readonly, nonatomic) NSArray *analyticsMessageValues;

- (void)encodeWithCoder:(id)a0;
- (id)_detailsForIncident:(id)a0;
- (id)initWithAdvisoryItem:(id)a0 routeIncidents:(id)a1 fallbackIcon:(id)a2;
- (id)initWithAdvisoryItem:(id)a0 transitIncidents:(id)a1 fallbackIcon:(id)a2;
- (id)initWithAdvisoryCard:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
