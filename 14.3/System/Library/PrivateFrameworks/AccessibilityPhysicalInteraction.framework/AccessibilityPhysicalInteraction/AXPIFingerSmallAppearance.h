@class NSString;

@interface AXPIFingerSmallAppearance : NSObject <AXPIFingerAppearanceDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)strokeWidth;
- (id)selectedStrokeColor;
- (id)selectedFillColor;
- (double)fingerWidth;
- (BOOL)useSystemFilters;
- (double)fingerInnerRadius;
- (double)strokeOutlineWidth;
- (BOOL)showInnerCircle;
- (id)strokeOutlineColor;
- (BOOL)showFingerOutlines;
- (id)deselectedStrokeColor;
- (id)deselectedFillColor;
- (double)fingerInnerCircleInnerRadius;
- (double)innerCircleStrokeWidth;
- (id)pressedCircularProgressFillColor;
- (id)circularProgressFillColor;
- (double)pressedAlpha;
- (double)pressedScale;
- (double)unpressedAlpha;
- (double)unpressedScale;

@end
