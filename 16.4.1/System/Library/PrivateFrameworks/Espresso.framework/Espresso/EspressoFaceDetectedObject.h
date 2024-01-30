@class NSString;

@interface EspressoFaceDetectedObject : NSObject <ExternalDetectedObject>

@property float confidence;
@property long long objectType;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property struct CGPoint { double x; double y; } center;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOptionsXloc:(float)a0 yloc:(float)a1 size:(float)a2 confidence:(float)a3;

@end
