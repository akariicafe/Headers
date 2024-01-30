@class NSString;

@interface CIFeature : NSObject

@property (readonly, retain) NSString *type;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (id)init;
- (id)debugDescription;

@end
