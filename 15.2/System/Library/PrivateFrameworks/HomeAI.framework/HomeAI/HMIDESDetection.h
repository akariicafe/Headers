@class NSNumber;

@interface HMIDESDetection : HMFObject

@property (readonly) NSNumber *confidence;
@property (readonly) NSNumber *label;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
