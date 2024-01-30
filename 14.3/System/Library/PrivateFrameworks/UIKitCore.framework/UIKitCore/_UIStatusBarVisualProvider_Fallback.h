@class NSArray, _UIStatusBar, NSString;

@interface _UIStatusBarVisualProvider_Fallback : NSObject <_UIStatusBarVisualProvider>

@property (retain, nonatomic) NSArray *placements;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;
@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })intrinsicContentSizeForOrientation:(long long)a0;

- (id)setupInContainerView:(id)a0;
- (void).cxx_destruct;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)a0;
- (id)styleAttributesForStyle:(long long)a0;

@end
