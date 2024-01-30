@class NSString;

@interface PCMapLocation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *countryName;
@property (retain, nonatomic) NSString *locationName;
@property (nonatomic) float latitude;
@property (nonatomic) float longitude;
@property (retain, nonatomic) NSString *airportCode;
@property (retain, nonatomic) NSString *airportName;

+ (id)dictionaryFromArrayOfLocations:(id)a0;
+ (void)removeLocationsFromArray:(id)a0 withinDistance:(float)a1 ofSameLocationsInDictionary:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqualToLocation:(id)a0;
- (id)init;
- (id)description;
- (BOOL)hasSamePositionAsLocation:(id)a0 tolerance:(float)a1;

@end
