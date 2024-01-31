@interface CNPhotoPickerListDataSource : CNPhotoPickerDataSource

+ (double)getAddItemsSectionHeight;
+ (struct CGSize { double x0; double x1; })getSuggestionItemSize;
+ (id)symbolImageNameForAddItemType:(unsigned long long)a0;

- (long long)numberOfItemsInSection:(long long)a0;
- (unsigned long long)itemsPerRowForSection:(long long)a0;

@end
