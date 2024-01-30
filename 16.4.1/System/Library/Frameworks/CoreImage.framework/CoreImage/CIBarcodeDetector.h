@class NSMutableDictionary, CIContext;

@interface CIBarcodeDetector : CIDetector {
    double _width;
    double _height;
    NSMutableDictionary *featureOptions;
}

@property (retain, nonatomic) CIContext *context;

- (void)dealloc;
- (id)featuresInImage:(id)a0;
- (id)featuresInImage:(id)a0 options:(id)a1;
- (id)initWithContext:(id)a0 options:(id)a1;

@end
