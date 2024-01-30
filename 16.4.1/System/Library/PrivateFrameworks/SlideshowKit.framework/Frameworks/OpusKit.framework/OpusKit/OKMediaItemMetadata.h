@class NSString, NSArray, NSDate, CLLocation;

@interface OKMediaItemMetadata : NSObject

@property unsigned long long type;
@property unsigned long long subType;
@property struct CGSize { double width; double height; } resolution;
@property (retain) NSDate *creationDate;
@property unsigned long long orientation;
@property double duration;
@property double displayTime;
@property double latitude;
@property double longitude;
@property BOOL opaque;
@property (copy) NSString *UTI;
@property (copy) NSString *name;
@property (copy) NSString *caption;
@property BOOL regionsOfInterestDetected;
@property (copy) NSArray *regionsOfInterest;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterestContainerBounds;
@property (readonly) double aspectRatio;
@property (readonly) CLLocation *location;
@property (readonly) struct CLLocationCoordinate2D { double x0; double x1; } locationCoordinate;
@property (readonly) BOOL hasRegionsOfInterest;
@property (readonly) BOOL hasRegionsOfInterestName;
@property (readonly) NSArray *regionsOfInterestName;

+ (unsigned long long)alignResolution:(unsigned long long)a0;
+ (id)keyPathsForValuesAffectingAspectRatio;
+ (id)keyPathsForValuesAffectingHasRegionsOfInterest;
+ (id)keyPathsForValuesAffectingHasRegionsOfInterestName;
+ (id)keyPathsForValuesAffectingLocation;
+ (id)keyPathsForValuesAffectingLocationCoordinate;
+ (id)keyPathsForValuesAffectingRegionsOfInterestName;

- (id)dictionary;
- (id)initWithFileURL:(id)a0;
- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (void)invalidate;
- (BOOL)isMediaSubtype:(unsigned long long)a0;
- (id)dictionaryValueForKey:(id)a0;
- (BOOL)writeToFileURL:(id)a0;
- (unsigned long long)bestResolutionForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 quality:(double)a2;
- (id)regionsOfInterestDictionary;
- (void)setPropertiesFromDictionary:(id)a0;

@end
