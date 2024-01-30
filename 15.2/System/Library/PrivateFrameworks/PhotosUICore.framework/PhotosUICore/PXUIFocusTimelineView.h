@class UITapGestureRecognizer, NSString;

@interface PXUIFocusTimelineView : PXFocusTimelineView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)autoFocusEventMarkerImage;
+ (id)userInitiatedFocusEventMarkerImage;

- (void)_handleTap:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_PXUIFocusTimelineView_commonInit;

@end
