@class NSString, CPPointOfInterest;

@interface CPSPointOfInterestAnnotation : NSObject <MKAnnotation>

@property (readonly, nonatomic) CPPointOfInterest *pointOfInterest;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPointOfInterest:(id)a0;

@end
