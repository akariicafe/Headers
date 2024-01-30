@class EKCalendarItemEditor, NSString, EKLocationEditItemViewController, EKUILocationEditItemModel;

@interface EKCalendarItemLocationInlineEditItem : EKEventEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKEventDetailSuggestedLocationCellDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, EKCalendarItemInlineEditItem> {
    EKUILocationEditItemModel *_viewModel;
    EKCalendarItemEditor *_editor;
    EKLocationEditItemViewController *_currentLocationEditController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)didTapAddSuggestedLocationCell:(id)a0 disambiguatedLocation:(id)a1;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)_scribbleInteraction:(id)a0 focusWillTransformElement:(id)a1;
- (void)_scribbleInteraction:(id)a0 didFinishWritingInElement:(id)a1;
- (void)_scribbleInteraction:(id)a0 requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (BOOL)editItemViewControllerSave:(id)a0;
- (void)_scribbleInteraction:(id)a0 willBeginWritingInElement:(id)a1;
- (void)dealloc;
- (void)didTapDismissSuggestedLocationCell:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (id)init;
- (unsigned long long)numberOfSubitems;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scribbleInteraction:(id)a0 frameForElement:(id)a1;
- (void).cxx_destruct;
- (void)_scribbleInteraction:(id)a0 focusElement:(id)a1 initialFocusSelectionReferencePoint:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)reset;
- (void)textFieldDidChange:(id)a0;
- (BOOL)isInline;
- (BOOL)isSaveable;
- (void)_clearButtonTapped:(id)a0;
- (void)refreshFromCalendarItemAndStore;
- (id)cellForSubitemAtIndex:(unsigned long long)a0 inEditor:(id)a1;
- (void)_clearLocationAtIndex:(unsigned long long)a0;
- (void)_setEditor:(id)a0 andUpdateScribbleInteractionOnCell:(id)a1 addScribbleInteraction:(BOOL)a2;
- (unsigned long long)_supportedSearchTypesForSubitemAtIndex:(unsigned long long)a0;
- (void)_updateClearButtonAndMakeVisible:(id)a0 index:(unsigned long long)a1;
- (void)_updateMapLocationCell:(id)a0 index:(unsigned long long)a1 location:(id)a2;
- (void)_updateVirtualConferenceCell:(id)a0 index:(unsigned long long)a1 virtualConference:(id)a2;
- (void)addStylingToCell:(id)a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)editItemPendingVideoConferenceCompleted:(id)a0;
- (BOOL)editor:(id)a0 canSelectSubitem:(unsigned long long)a1;
- (BOOL)forceRefreshStartAndEndDatesOnSave;
- (BOOL)forceRefreshURLItemOnSave;
- (BOOL)forceTableReloadOnSave;
- (BOOL)isSubitemAtIndexSaveable:(unsigned long long)a0;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (id)searchStringForEventAutocomplete;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned long long)a0;

@end
