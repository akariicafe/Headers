@class NSString;

@interface PGMatchingCommonLocation : NSObject {
    double _distance;
}

@property (retain, nonatomic) NSString *label;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } addressCoordinate;

+ (id)matchingCommonLocationWithLabel:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 forAddressCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2;

- (void).cxx_destruct;
- (double)distanceBetweenCoordinates;

@end
