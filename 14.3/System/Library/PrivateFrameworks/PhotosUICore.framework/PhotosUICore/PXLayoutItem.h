@class NSString;

@interface PXLayoutItem : NSObject <PXLayoutItemInput>

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double weight;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) struct CGPoint { double x; double y; } positionOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredCropRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } acceptableCropRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (double)weightUsingCriterion:(long long)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 weight:(double)a1;

@end
