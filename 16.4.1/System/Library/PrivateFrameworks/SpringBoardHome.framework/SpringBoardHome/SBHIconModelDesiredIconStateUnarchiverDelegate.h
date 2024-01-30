@class NSString;

@interface SBHIconModelDesiredIconStateUnarchiverDelegate : NSObject <SBHIconStateUnarchiverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; })gridSizeClassSizesForIconStateUnarchiver:(id)a0;
- (struct SBHIconGridSize { unsigned short x0; unsigned short x1; })iconStateUnarchiver:(id)a0 listGridSizeForFolderClass:(Class)a1;
- (unsigned long long)maxIconCountForDockForIconStateUnarchiver:(id)a0;
- (unsigned long long)iconModel:(id)a0 allowedGridSizeClassesForFolderClass:(Class)a1;
- (unsigned long long)maxListCountForFoldersForIconStateUnarchiver:(id)a0;

@end
