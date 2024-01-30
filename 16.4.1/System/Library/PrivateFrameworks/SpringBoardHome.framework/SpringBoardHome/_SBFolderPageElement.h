@class SBFolderIcon, SBIconGridImage;

@interface _SBFolderPageElement : NSObject

@property (retain, nonatomic) SBIconGridImage *gridImage;
@property (nonatomic, getter=isGridImagePossible) BOOL gridImagePossible;
@property (nonatomic) unsigned long long visibleRow;
@property (nonatomic) unsigned long long pageIndex;
@property (weak, nonatomic) SBFolderIcon *folderIcon;

- (unsigned long long)firstVisibleRowForGap;
- (unsigned long long)firstVisibleMiniIconIndex;
- (void).cxx_destruct;

@end
