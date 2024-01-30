@class NSArray, NSRegularExpression;

@interface AXMLElementCoagulation : NSObject

@property (nonatomic) BOOL isRTL;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } appFrame;
@property (nonatomic) double screenScale;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) long long appOrientation;
@property (retain, nonatomic) NSArray *clickableTextKeywords;
@property (retain, nonatomic) NSRegularExpression *nonAlphaCharactersRegex;
@property (nonatomic) BOOL isiPad;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_groupFeatures:(id)a0;
- (id)_reorderByXCut:(id)a0;
- (void)_mergeFeatureIntoGroup:(id)a0 feature:(id)a1;
- (id)_reorderByYCut:(id)a0;
- (BOOL)_allTabGroupsHaveSingleSubfeature:(id)a0;
- (id)_applyCrossUITypeNMS:(id)a0;
- (id)_applyHorizontalMirrorToFeatures:(id)a0;
- (id)_compareArea:(id)a0;
- (id)_compareForX:(id)a0;
- (id)_compareForY:(id)a0;
- (long long)_compareX:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frame2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)_compareY:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frame2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_createToggleGroup:(id)a0 toGroup:(id)a1;
- (id)_featuresByReorderingTwoRows:(id)a0 minY:(double)a1 maxY:(double)a2;
- (id)_flattenFeatures:(id)a0;
- (id)_getAXMLElementGroupsForFeatures:(id)a0;
- (id)_getCandidateTabBarFeatures:(id)a0 screenSize:(struct CGSize { double x0; double x1; })a1;
- (id)_getClickableTextButtons:(id)a0;
- (id)_getClosestDetectionBelow:(id)a0 target:(id)a1 maxDistance:(long long)a2;
- (id)_getFeaturesForAXMLTabButtonGroups:(id)a0;
- (id)_getFlattenedChildFeatures:(id)a0;
- (id)_getGroupedPictureAndSubtitleFeature:(id)a0;
- (id)_getGroupedSegmentedControlFeatures:(id)a0;
- (id)_getGroupedTabBarFeatures:(id)a0;
- (id)_getGroupedTextButtonFeatures:(id)a0;
- (id)_getGroupedTextFeatures:(id)a0;
- (id)_getGroupedTextFields:(id)a0;
- (id)_getGroupedToggleCheckboxWithText:(id)a0;
- (id)_getHorizontalSegmentationPointDict:(id)a0;
- (id)_getTabGroupSubfeatureUIClassTypes:(id)a0;
- (id)_getTopLevelFeatureGroups:(id)a0;
- (double)_getXOverlap:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 obj2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)_getYOverlap:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 obj2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_groupFeaturesByContainment:(id)a0;
- (id)_groupSingleContainerAsButton:(id)a0 featureToGroup:(id)a1;
- (BOOL)_hasXOverlap:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 obj2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_hasYOverlap:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 obj2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_improveFeatureFrames:(id)a0;
- (BOOL)_isInTopBar:(id)a0;
- (id)_mergeTopLeftButton:(id)a0;
- (id)_removeExtraOCRAndIconFromTextField:(id)a0;
- (void)_removeFeatureFromGroup:(id)a0 feature:(id)a1;
- (id)_removeTextContainingOnlyToggles:(id)a0 toggleCheckboxTypes:(id)a1;
- (id)_reorderSimilarTopNeighbors:(id)a0;
- (id)_reorderedTabsForSortedFeatures:(id)a0 screenSize:(struct CGSize { double x0; double x1; })a1;
- (id)_repairTextInTabItems:(id)a0;
- (BOOL)_shouldBeTabBar:(BOOL)a0 groupedTabButtons:(id)a1;
- (id)_sortFeaturesReadingOrder:(id)a0;
- (id)coagulateElements:(id)a0;

@end
