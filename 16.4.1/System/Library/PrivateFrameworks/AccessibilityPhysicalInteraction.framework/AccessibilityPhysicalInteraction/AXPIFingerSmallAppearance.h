@class NSString;

@interface AXPIFingerSmallAppearance : NSObject <AXPIFingerAppearanceDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)pressedScale;
- (double)strokeWidth;
- (id)selectedFillColor;
- (id)selectedStrokeColor;
- (BOOL)showInnerCircle;
- (id)circularProgressFillColor;
- (id)deselectedFillColor;
- (id)deselectedStrokeColor;
- (double)fingerInnerCircleInnerRadius;
- (double)fingerInnerRadius;
- (double)fingerWidth;
- (double)innerCircleStrokeWidth;
- (double)pressedAlpha;
- (id)pressedCircularProgressFillColor;
- (BOOL)showFingerOutlines;
- (id)strokeOutlineColor;
- (double)strokeOutlineWidth;
- (double)unpressedAlpha;
- (double)unpressedScale;
- (BOOL)useSystemFilters;

@end
