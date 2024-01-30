@interface ICNoteListSortUtilities : NSObject

+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)a0;
+ (long long)sortTypeForTag:(long long)a0;
+ (long long)currentNoteListSortType;
+ (id)sortDescriptorsForType:(long long)a0 ascending:(BOOL)a1;
+ (id)legacySortDescriptorsForType:(long long)a0 ascending:(BOOL)a1;
+ (id)sortDescriptorsForType:(long long)a0;
+ (id)sortDescriptorsForPinnedNotes;
+ (long long)sortTypeForFolderNoteOrder:(unsigned long long)a0;
+ (void)setCurrentNoteListSortType:(long long)a0;
+ (id)dateForCurrentSortTypeForNote:(id)a0;
+ (id)legacySortDescriptorsForType:(long long)a0;
+ (id)sortDescriptorsForCurrentType;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)a0 folderNoteSortType:(id)a1;
+ (id)descriptionForNoteListSortType:(long long)a0;
+ (void)setCurrentNoteListSortTypeByTag:(long long)a0;
+ (BOOL)isMenuItemCurrentSortTypeForTag:(long long)a0;
+ (long long)tagForSortType:(long long)a0;
+ (id)dateForCurrentSortTypeAccessibilityStringForNote:(id)a0;

@end
