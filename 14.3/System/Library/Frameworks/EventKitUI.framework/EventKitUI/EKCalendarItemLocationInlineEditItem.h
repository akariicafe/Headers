@class EKCalendarItemEditor, NSString, NSMutableDictionary, NSMutableArray;

@interface EKCalendarItemLocationInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKEventDetailPredictedLocationCellDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, EKCalendarItemInlineEditItem> {
    NSMutableArray *_locationsAndCells;
    EKCalendarItemEditor *_editor;
    BOOL _sourceSupportsAvailabilityRequests;
    NSMutableDictionary *_conferenceRoomInfos;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_locationPlaceholder;
+ (id)conferenceRoomNameForLocation:(id)a0;

- (BOOL)textFieldShouldClear:(id)a0;
- (void)eventDetailPredictedLocationCellRejectedPrediction:(id)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (void)addStylingToCell:(id)a0 forSubitemAtIndex:(unsigned long long)a1;
- (id)init;
- (void)_contentSizeCategoryChanged:(id)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_scribbleInteraction:(id)a0 didFinishWritingInElement:(id)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)searchStringForEventAutocomplete;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned long long)a0;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (BOOL)editor:(id)a0 canSelectSubitem:(unsigned long long)a1;
- (void)reset;
- (void)textFieldDidBeginEditing:(id)a0;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)dealloc;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)forceTableReloadOnSave;
- (BOOL)_scribbleInteraction:(id)a0 focusWillTransformElement:(id)a1;
- (BOOL)editItemViewControllerSave:(id)a0;
- (void)_scribbleInteraction:(id)a0 willBeginWritingInElement:(id)a1;
- (void)refreshFromCalendarItemAndStore;
- (void)_scribbleInteraction:(id)a0 requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)_updateAvailabilityInformation;
- (BOOL)_showSuggestedLocation:(id)a0;
- (BOOL)isSubitemAtIndexSaveable:(unsigned long long)a0;
- (BOOL)_showConferenceLocation:(id)a0;
- (void)_clearLocation:(id)a0 atIndex:(unsigned long long)a1;
- (void)_refreshConferenceRoomCell:(id)a0;
- (void)_setEditor:(id)a0 andAddScribbleInteractionToCellIfNecessary:(id)a1;
- (void)_updateCell:(id)a0 index:(unsigned long long)a1 location:(id)a2;
- (id)_clearButtonView:(unsigned long long)a0;
- (void)_updateAuxiliaryLocationsForNewLocation:(id)a0;
- (void)_updateCalendarItemLocation;
- (id)participantForConferenceRoomName:(id)a0;
- (id)locationCellPairForCell:(id)a0;
- (void)_updateLocation:(id)a0 withStructuredLocation:(id)a1;
- (void)_updateLocation:(id)a0 withConferenceRoom:(id)a1;
- (BOOL)forceRefreshStartAndEndDatesOnSave;
- (id)cellForSubitemAtIndex:(unsigned long long)a0 inEditor:(id)a1;
- (BOOL)isInline;
- (void)eventDetailPredictedLocationCellAcceptedPrediction:(id)a0 disambiguatedLocation:(id)a1;
- (void)_scribbleInteraction:(id)a0 focusElement:(id)a1 initialFocusSelectionReferencePoint:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (unsigned long long)numberOfSubitems;
- (void)_clearButtonTapped:(id)a0;
- (BOOL)isSaveable;
- (void)textFieldDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scribbleInteraction:(id)a0 frameForElement:(id)a1;

@end
