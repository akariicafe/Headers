@class NSString;

@interface _TVRemoteAlertVisualStyle_Pad : NSObject <_TVRemoteAlertVisualStyleProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)backgroundMaterialView;
- (double)crossfadeDuration;
- (id)foregroundVisualEffect;
- (double)maximizedCornerRadius;
- (double)remoteWidth;
- (double)remoteHeight;
- (double)minimizedCornerRadius;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForParentView:(id)a0;
- (BOOL)allowsTapToDismiss;
- (BOOL)allowsSwipeToDismiss;

@end
