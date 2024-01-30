@class _SBFolderPageElement, SBFolderIconImageView;

@interface _SBIconGridWrapperView : UIImageView

@property (retain, nonatomic) _SBFolderPageElement *element;
@property (weak, nonatomic) SBFolderIconImageView *folderIconImageView;

- (void).cxx_destruct;
- (void)reposition;
- (void)positionAtRow:(unsigned long long)a0;

@end
