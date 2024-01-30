@interface _TtC12PhotosUIAppsP33_21D1475C0D835C1E3DA8323E9B88080844PUXStoryColorGradeEditorOverlayContentLayout : PXGAbsoluteCompositeLayout <PXGSublayoutProvider> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ selectionSpritesIndexRange;
    void /* unknown type, empty encoding */ sublayoutFrames;
    void /* unknown type, empty encoding */ previewClip;
    void /* unknown type, empty encoding */ previewClipTimeRange;
    void /* unknown type, empty encoding */ captionHeightsByRow;
    void /* unknown type, empty encoding */ storyModelObservation;
    void /* unknown type, empty encoding */ viewModelObservation;
    void /* unknown type, empty encoding */ updateFlags;
    void /* unknown type, empty encoding */ hasVerticalScrollingContent;
}

@property (nonatomic, readonly) long long scrollableAxis;

- (void)update;
- (id)initWithComposition:(id)a0;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(id *)a2;
- (id)init;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (void)referenceSizeDidChange;
- (void).cxx_destruct;

@end
