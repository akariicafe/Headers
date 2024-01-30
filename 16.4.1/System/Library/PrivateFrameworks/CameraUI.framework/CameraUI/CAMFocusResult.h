@interface CAMFocusResult : NSObject

@property (readonly, nonatomic, getter=isPerformingContrastDetection) BOOL performingContrastDetection;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } pointOfInterest;
@property (readonly, nonatomic) long long focusMode;
@property (readonly, nonatomic) BOOL contrastBasedFocusDidStart;
@property (readonly, nonatomic) BOOL contrastBasedFocusDidEnd;
@property (readonly, nonatomic) BOOL deviceSupportsFocus;

- (id)initWithMode:(long long)a0 pointOfInterest:(struct CGPoint { double x0; double x1; })a1 performingContrastDetection:(BOOL)a2 contrastBasedFocusDidStart:(BOOL)a3 contrastBasedFocusDidEnd:(BOOL)a4 deviceSupportsFocus:(BOOL)a5;
- (id)description;

@end
