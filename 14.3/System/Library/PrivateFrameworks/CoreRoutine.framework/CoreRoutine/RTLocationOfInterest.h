@class NSUUID, RTLocation, RTMapItem, NSArray, NSString;

@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double uncertainty;
@property (readonly, nonatomic) RTLocation *location;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long typeSource;
@property (readonly, nonatomic) RTMapItem *mapItem;
@property (readonly, nonatomic) unsigned long long geoMapItemSource;
@property (readonly, nonatomic) NSArray *visits;
@property (readonly, nonatomic) NSString *preferredName;
@property (readonly, nonatomic) NSString *customLabel;

+ (BOOL)locationOfInterestTypeIsValid:(long long)a0;
+ (id)geoMapItemSourceToString:(unsigned long long)a0;
+ (id)locationOfInterestTypeSourceToString:(unsigned long long)a0;
+ (id)locationOfInterestTypeToString:(long long)a0;

- (id)pruneVisitsWithDateInterval:(id)a0;
- (id)init;
- (id)initWithLocation:(id)a0 confidence:(double)a1 identifier:(id)a2 type:(long long)a3 typeSource:(unsigned long long)a4 visits:(id)a5 customLabel:(id)a6 mapItem:(id)a7;
- (id)nameFromType:(long long)a0;
- (long long)recentCompare:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLatitude:(double)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)setUncertainty:(double)a0;
- (BOOL)isEqual:(id)a0;
- (void)setLongitude:(double)a0;
- (void)encodeWithCoder:(id)a0;

@end
