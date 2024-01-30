@interface PhotosUIApps.PUXStoryColorGradeEditorItemLayout : PXGAbsoluteCompositeLayout {
    void /* unknown type, empty encoding */ colorGradeKind;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ clipLayout;
    void /* unknown type, empty encoding */ clipLayoutIndex;
    void /* unknown type, empty encoding */ overlayLayout;
    void /* unknown type, empty encoding */ overlayLayoutIndex;
    void /* unknown type, empty encoding */ previewMode;
    void /* unknown type, empty encoding */ updateFlags;
    void /* unknown type, empty encoding */ clip;
    void /* unknown type, empty encoding */ clipTimeRange;
    void /* unknown type, empty encoding */ captionHeight;
}

- (void)update;
- (id)initWithComposition:(id)a0;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(id *)a2;
- (id)init;
- (void)referenceSizeDidChange;
- (void).cxx_destruct;

@end
