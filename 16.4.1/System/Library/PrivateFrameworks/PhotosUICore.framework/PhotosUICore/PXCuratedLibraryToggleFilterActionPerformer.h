@interface PXCuratedLibraryToggleFilterActionPerformer : PXCuratedLibraryActionPerformer

- (id)_currentContentFilterState;
- (id)_currentLibraryFilterState;
- (BOOL)_updateToContentFilterState:(id)a0;
- (BOOL)_updateToLibraryFilterState:(id)a0;

@end
