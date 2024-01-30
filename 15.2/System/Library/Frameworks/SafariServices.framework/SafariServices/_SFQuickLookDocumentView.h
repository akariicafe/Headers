@class _SFQuickLookDocumentInfoView, NSString, NSArray, UIStackView, UIView, NSLayoutConstraint;
@protocol _SFQuickLookDocumentViewDelegate;

@interface _SFQuickLookDocumentView : UIScrollView <UIDragInteractionDelegate, UIDragInteractionDelegate_Private> {
    UIView *_wrapperView;
    UIView *_contentView;
    _SFQuickLookDocumentInfoView *_documentInfoView;
    NSArray *_actionButtons;
    UIStackView *_actionButtonsView;
    NSLayoutConstraint *_documentInfoViewBottomAnchorConstraint;
}

@property (weak, nonatomic) id<_SFQuickLookDocumentViewDelegate> quickLookDocumentViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (long long)_dragInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (void)_actionButtonTapped:(id)a0;
- (void)updateDocumentIcon:(id)a0;
- (void)updateDocumentFileName:(id)a0;
- (void)updateDocumentFileType:(id)a0;
- (void)updateDocumentFileSize:(id)a0;
- (void)updateActionTitles:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForButtonAtIndex:(unsigned long long)a0;
- (void)_setUpLayoutConstraints;
- (void)_updatePropertiesDefinedByContentSizeCategory;
- (void)_configureOrientationBasedConstraints:(long long)a0;

@end
