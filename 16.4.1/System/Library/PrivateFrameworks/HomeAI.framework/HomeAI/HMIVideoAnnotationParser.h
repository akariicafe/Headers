@class NSArray;

@interface HMIVideoAnnotationParser : HMFObject

@property (readonly) NSArray *tracks;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } lastKnownTimeStamp;

+ (id)eventForClass:(Class)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 UUID:(id)a2;

- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (id)eventsForFragment;
- (id)eventsForTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
