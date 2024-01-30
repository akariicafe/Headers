@class NSArray;

@interface SALocalSearchMapViewport : SADomainObject

@property (nonatomic) double eastLongitude;
@property (nonatomic) double northLatitude;
@property (nonatomic) double southLatitude;
@property (nonatomic) double timeInSecondsSinceViewportChanged;
@property (nonatomic) double timeInSecondsSinceViewportEnteredForeground;
@property (copy, nonatomic) NSArray *vertices;
@property (nonatomic) double westLongitude;

+ (id)mapViewport;
+ (id)mapViewportWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
