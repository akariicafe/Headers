@interface _SBHLibraryPodIconView : SBIconView

+ (BOOL)supportsDragInteraction;
+ (BOOL)supportsPreviewInteraction;
+ (BOOL)supportsCursorInteraction;
+ (BOOL)supportsTapGesture;

- (id)createNewIconLabelViewFactory;

@end
