@class PKApplyActionContent;
@protocol PKApplyConfirmInfoSectionControllerDelegate;

@interface PKApplyConfirmInfoSectionController : PKApplyCollectionViewSectionController {
    PKApplyActionContent *_actionContent;
    id<PKApplyConfirmInfoSectionControllerDelegate> _delegate;
}

- (void)setPage:(id)a0;
- (id)identifiers;
- (void).cxx_destruct;
- (void)_configureContentSection:(id)a0;
- (void)configureCellForRegistration:(id)a0 item:(id)a1;
- (void)configureFooterView:(id)a0 forSectionIdentifier:(id)a1;
- (Class)footerViewClassForSectionIdentifier:(id)a0;
- (id)initWithController:(id)a0 applyPage:(id)a1 delegate:(id)a2;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
