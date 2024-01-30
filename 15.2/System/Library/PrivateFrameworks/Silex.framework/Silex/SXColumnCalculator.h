@class NSString;

@interface SXColumnCalculator : NSObject <SXColumnCalculator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)columnLayoutWithViewportSize:(struct CGSize { double x0; double x1; })a0 constrainedToWidth:(double)a1 documentLayout:(id)a2 contentScaleFactor:(double)a3;
- (id)columnLayoutWithConstrainedViewportSize:(struct CGSize { double x0; double x1; })a0 viewportSize:(struct CGSize { double x0; double x1; })a1 documentLayout:(id)a2;
- (id)columnLayoutWithConstrainedViewportSize:(struct CGSize { double x0; double x1; })a0 scaledConstrainedViewportSize:(struct CGSize { double x0; double x1; })a1 viewportSize:(struct CGSize { double x0; double x1; })a2 documentLayout:(id)a3 contentScaleFactor:(double)a4;

@end
