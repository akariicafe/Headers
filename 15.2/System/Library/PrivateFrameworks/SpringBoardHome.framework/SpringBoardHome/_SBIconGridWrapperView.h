@class _SBFolderPageElement, SBFolderIconImageView;

@interface _SBIconGridWrapperView : UIImageView

@property (retain, nonatomic) _SBFolderPageElement *element;
@property (weak, nonatomic) SBFolderIconImageView *folderIconImageView;

- (void)reposition;
- (void)positionAtRow:(unsigned long long)a0;
- (void).cxx_destruct;

@end
