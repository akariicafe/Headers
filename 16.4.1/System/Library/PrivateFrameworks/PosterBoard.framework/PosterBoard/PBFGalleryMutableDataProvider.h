@interface PBFGalleryMutableDataProvider : PBFPosterGalleryDataProvider

- (BOOL)_isSectionIdentifierValid:(id)a0;
- (BOOL)_isSectionTypeValid:(long long)a0;
- (BOOL)_isValidItem:(id)a0 withinSectionIdentifier:(id)a1;
- (void)addSectionWithIdentifier:(id)a0 localizedTitle:(id)a1 type:(long long)a2 items:(id)a3;
- (void)addToSection:(id)a0 item:(id)a1;
- (void)configureForGallery:(id)a0;
- (void)executeBulkUpdate:(id /* block */)a0;
- (void)insertSectionWithIdentifier:(id)a0 toIndex:(unsigned long long)a1 localizedTitle:(id)a2 localizedSubtitle:(id)a3 type:(long long)a4 items:(id)a5;
- (void)removeFromSection:(id)a0 item:(id)a1;
- (void)removeSectionWithIdentifier:(id)a0;
- (void)setItems:(id)a0 forSectionIdentifier:(id)a1;
- (void)sortItemsWithinSectionAtIdentifier:(id)a0 comparator:(id /* block */)a1;
- (void)sortSectionsWithComparator:(id /* block */)a0;

@end
