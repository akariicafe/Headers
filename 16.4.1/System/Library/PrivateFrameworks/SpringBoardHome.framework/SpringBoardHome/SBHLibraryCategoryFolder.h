@class SBHLibraryCategoryIdentifier;

@interface SBHLibraryCategoryFolder : SBFolder

@property (readonly, nonatomic) SBHLibraryCategoryIdentifier *libraryCategoryIdentifier;

- (BOOL)isLibraryCategoryFolder;
- (id)initWithDisplayName:(id)a0 maxListCount:(unsigned long long)a1 listGridSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a2 libraryCategoryIdentifier:(id)a3;
- (id)_indexPathToRevealForJiggleMode;
- (void).cxx_destruct;

@end
