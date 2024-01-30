@class NSString, UIView;

@interface _UIPreviewInteractionSystemHighlighter : NSObject <_UIPreviewInteractionHighlighting>

@property (retain, nonatomic) UIView *initialSnapshotView;
@property (retain, nonatomic) UIView *updatedSnapshotView;
@property (nonatomic) BOOL blinderViewEnabled;
@property (retain, nonatomic) UIView *blinderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_newSnapshotViewForPreviewingContext:(id)a0 afterScreenUpdates:(BOOL)a1;
- (void)finalizeHighlightForPreviewingContext:(id)a0;
- (id)highlightShouldBeginInContainerView:(id)a0 presentationContainerView:(id)a1 previewingContext:(id)a2;
- (void)prepareHighlightWithPreviewingContext:(id)a0;

@end
