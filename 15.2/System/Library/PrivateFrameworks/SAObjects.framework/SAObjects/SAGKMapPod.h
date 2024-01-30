@class SAUIAppPunchOut, SALocation, NSNumber;

@interface SAGKMapPod : SAGKPodView

@property (retain, nonatomic) SALocation *location;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (copy, nonatomic) NSNumber *showButton;
@property (copy, nonatomic) NSNumber *zoomLevel;

+ (id)mapPod;
+ (id)mapPodWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
