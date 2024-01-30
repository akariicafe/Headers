@interface PXPLLibraryContentModeSelection : NSObject

+ (void)setPersistedLibraryContentModeSelection:(int)a0;
+ (int)launchContentModeForNavigationDestination:(id)a0;
+ (int)contentModeForNavigationDestination:(id)a0;
+ (int)getPersistedLibraryContentModeSelection;
+ (BOOL)hasPersistedLibraryContentModeSelection;

@end
