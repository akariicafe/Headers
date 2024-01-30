@class NSString;

@interface JetUI._PlaceableAsJUPlaceable : NSObject <JUPlaceable> {
    void /* unknown type, empty encoding */ base;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measureToFit:(struct CGSize { double x0; double x1; })a0 withTraitCollection:(id)a1;
- (void)placeAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTraitCollection:(id)a1;

@end
