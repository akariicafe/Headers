@class NSString, PKApplyFooterContent;
@protocol PKApplyInlineFooterSectionControllerDelegate;

@interface PKApplyInlineFooterSectionController : PKApplyCollectionViewSectionController <PKApplyInlineFooterSectionControllerDelegate> {
    id<PKApplyInlineFooterSectionControllerDelegate> _delegate;
    PKApplyFooterContent *_content;
    NSString *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifiers;
- (void).cxx_destruct;
- (void)_configureContentSection:(id)a0;
- (void)didTapFooterLink:(id)a0;
- (id)initWithController:(id)a0 applyPage:(id)a1 content:(id)a2 delegate:(id)a3;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
