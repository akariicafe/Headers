@class NSString, NSNumber, VNRecognizedText;

@interface AIRecognizedText : NSObject

@property (retain, nonatomic) NSString *string;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) double width;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterest;
@property (retain, nonatomic) VNRecognizedText *recognizedText;
@property (retain, nonatomic) NSNumber *numericalValue;

- (id)initWithString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBoxForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (struct CGPoint { double x0; double x1; })_point:(struct CGPoint { double x0; double x1; })a0 adjustedByRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithString:(id)a0 center:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithString:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 numericalValue:(id)a2;
- (id)initWithString:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 width:(double)a2 numericalValue:(id)a3;
- (id)initWithTextObservation:(id)a0;
- (id)initWithTextObservation:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
