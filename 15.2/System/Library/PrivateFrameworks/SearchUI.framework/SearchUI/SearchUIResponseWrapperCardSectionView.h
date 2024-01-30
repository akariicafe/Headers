@class NSString;

@interface SearchUIResponseWrapperCardSectionView : SearchUICardSectionView <VRXInteractionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)setupContentView;
- (void)informHostOfViewResize:(struct CGSize { double x0; double x1; })a0;
- (void)performSFCommand:(id)a0;

@end
