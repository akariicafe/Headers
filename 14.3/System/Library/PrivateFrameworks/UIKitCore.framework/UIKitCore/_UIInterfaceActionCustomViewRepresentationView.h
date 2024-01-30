@class UIView;

@interface _UIInterfaceActionCustomViewRepresentationView : UIInterfaceActionRepresentationView {
    UIView *_actionContentView;
}

- (id)initWithAction:(id)a0;
- (void)updateContentsInsertedIntoHierarchy;
- (void).cxx_destruct;
- (id)description;
- (void)_removeLoadedContentsFromViewHierarcy;
- (void)_insertLoadedContentsIntoHierarchy;
- (BOOL)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)a0;
- (id)_fittingContentSizingView;
- (void)setHighlighted:(BOOL)a0;
- (id)_actionContentView;

@end
