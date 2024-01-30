@class UIView;

@interface _UIInterfaceActionCustomViewRepresentationView : UIInterfaceActionRepresentationView {
    UIView *_actionContentView;
}

- (long long)_focusItemDeferralMode;
- (void)setHighlighted:(BOOL)a0;
- (id)description;
- (void)_removeLoadedContentsFromViewHierarcy;
- (id)initWithAction:(id)a0;
- (id)_actionContentView;
- (id)_fittingContentSizingView;
- (void).cxx_destruct;
- (void)updateContentsInsertedIntoHierarchy;
- (BOOL)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)a0;
- (void)_insertLoadedContentsIntoHierarchy;

@end
