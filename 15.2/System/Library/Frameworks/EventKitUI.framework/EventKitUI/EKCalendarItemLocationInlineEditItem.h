@class EKCalendarItemEditor, NSString, EKLocationEditItemViewController, EKUILocationEditItemModel;

@interface EKCalendarItemLocationInlineEditItem : EKEventEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKEventDetailPredictedLocationCellDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, EKCalendarItemInlineEditItem> {
    EKUILocationEditItemModel *_viewModel;
    EKCalendarItemEditor *_editor;
    EKLocationEditItemViewController *_currentLocationEditController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)editItemViewControllerSave:(id)a0;
- (void)eventDetailPredictedLocationCellAcceptedPrediction:(id)a0 disambiguatedLocation:(id)a1;
- (BOOL)_scribbleInteraction:(id)a0 focusWillTransformElement:(id)a1;
- (BOOL)isInline;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)_scribbleInteraction:(id)a0 focusElement:(id)a1 initialFocusSelectionReferencePoint:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)_scribbleInteraction:(id)a0 willBeginWritingInElement:(id)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)textFieldDidChange:(id)a0;
- (void)_scribbleInteraction:(id)a0 requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)textFieldDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scribbleInteraction:(id)a0 frameForElement:(id)a1;
- (void)eventDetailPredictedLocationCellRejectedPrediction:(id)a0;
- (id)init;
- (void)_scribbleInteraction:(id)a0 didFinishWritingInElement:(id)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (unsigned long long)numberOfSubitems;
- (void)dealloc;
- (void)reset;
- (BOOL)isSaveable;
- (void)_clearButtonTapped:(id)a0;
- (void)addStylingToCell:(id)a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)editItemPendingVideoConferenceCompleted:(id)a0;
- (id)searchStringForEventAutocomplete;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned long long)a0;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (BOOL)editor:(id)a0 canSelectSubitem:(unsigned long long)a1;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)forceTableReloadOnSave;
- (BOOL)forceRefreshStartAndEndDatesOnSave;
- (BOOL)forceRefreshURLItemOnSave;
- (id)cellForSubitemAtIndex:(unsigned long long)a0 inEditor:(id)a1;
- (BOOL)isSubitemAtIndexSaveable:(unsigned long long)a0;
- (id)_clearButtonView:(unsigned long long)a0;
- (void)_updateMapLocationCell:(id)a0 index:(unsigned long long)a1 location:(id)a2;
- (void)_updateVirtualConferenceCell:(id)a0 index:(unsigned long long)a1 virtualConference:(id)a2;
- (void)_setEditor:(id)a0 andUpdateScribbleInteractionOnCell:(id)a1 addScribbleInteraction:(BOOL)a2;
- (unsigned long long)_supportedSearchTypesForSubitemAtIndex:(unsigned long long)a0;
- (void)_clearLocationAtIndex:(unsigned long long)a0;

@end
