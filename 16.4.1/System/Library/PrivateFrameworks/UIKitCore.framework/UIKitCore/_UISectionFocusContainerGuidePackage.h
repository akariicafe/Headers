@class NSArray, _UIFocusCollectionViewSectionContainerGuide;

@interface _UISectionFocusContainerGuidePackage : NSObject

@property (retain, nonatomic) _UIFocusCollectionViewSectionContainerGuide *sectionFocusGuide;
@property (retain, nonatomic) _UIFocusCollectionViewSectionContainerGuide *sectionEndFocusGuide;
@property (readonly, nonatomic) NSArray *focusGuides;

- (void).cxx_destruct;
- (void)_updateFocusGuidesArray;

@end
