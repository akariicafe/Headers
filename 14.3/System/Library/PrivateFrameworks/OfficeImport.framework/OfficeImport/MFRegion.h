@interface MFRegion : NSObject <MFObject>

- (int)invert:(id)a0;
- (int)selectInto:(id)a0;
- (id)pathForClippingWithDeviceContext:(id)a0;
- (int)fill:(id)a0 in_brush:(id)a1;
- (int)frame:(id)a0 in_brush:(id)a1;

@end
