@class MKPlaceSectionView, NSString;

@interface MKPlaceSectionViewController : UIViewController <_MKAnimationStackViewDelegate, MKPlaceSectionViewDelegate>

@property (readonly, nonatomic) MKPlaceSectionView *sectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)stackViewNeedsLayout:(id)a0;
- (void)sectionView:(id)a0 didSelectHeader:(id)a1;
- (void)sectionView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;
- (void)sectionView:(id)a0 didDeselectRow:(id)a1 atIndex:(unsigned long long)a2;
- (void)sectionView:(id)a0 didSelectFooter:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_viewHostsLayoutEngineAllowsTAMIC_NO;

@end
