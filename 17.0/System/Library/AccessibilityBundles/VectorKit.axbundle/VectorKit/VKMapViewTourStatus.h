@class VKPointFeatureAccessibilityElement, VKFeatureAccessibilityElement;

@interface VKMapViewTourStatus : NSObject

@property (retain, nonatomic) VKFeatureAccessibilityElement *currentLocation;
@property (retain, nonatomic) VKFeatureAccessibilityElement *lastCurrentLocation;
@property (retain, nonatomic) VKFeatureAccessibilityElement *futureLocation;
@property (retain, nonatomic) VKFeatureAccessibilityElement *lastFutureLocation;
@property (retain, nonatomic) VKPointFeatureAccessibilityElement *futurePOI;
@property (retain, nonatomic) VKPointFeatureAccessibilityElement *lastFuturePOI;
@property (nonatomic) struct CGPoint { double x; double y; } currentPoint;
@property (nonatomic) struct CGPoint { double x; double y; } futurePoint;
@property (nonatomic) double lastFutureDistance;
@property (nonatomic) double lastPOIDistance;
@property (nonatomic) unsigned long long futurePOISide;
@property (nonatomic) unsigned long long lastFuturePOISide;
@property (nonatomic) BOOL isStationary;

- (void).cxx_destruct;
- (id)_stringForSide:(unsigned long long)a0;
- (id)_tourStatusAnnouncementWithLength:(unsigned long long)a0;
- (id)longTourStatusAnnouncement;
- (id)shortTourStatusAnnouncement;
- (void)updateTourStatusWithCurrentLocation:(id)a0 currentPoint:(struct CGPoint { double x0; double x1; })a1 futureLocation:(id)a2 futurePoint:(struct CGPoint { double x0; double x1; })a3 tourPOI:(id)a4 tourPOISide:(unsigned long long)a5 isStationary:(BOOL)a6;

@end
