@class OADBackground, NSString, NSArray, PDAnimation, PDTransition, OADTableStyle;

@interface PDSlideBase : NSObject {
    NSString *mName;
    NSArray *mDrawables;
    OADBackground *mBackground;
    PDAnimation *mAnimation;
    PDTransition *mTransition;
    PDTransition *mPpt2011Transition;
    OADTableStyle *mDefaultTableStyle;
    unsigned char mIsHidden : 1;
    unsigned char mIsDoneWithContent : 1;
}

@property (nonatomic) unsigned int slideId;

+ (int)inheritedPlaceholderType:(int)a0;

- (id)colorScheme;
- (void)setBackground:(id)a0;
- (id)animation;
- (id)colorMap;
- (id)transition;
- (void)setIsHidden:(BOOL)a0;
- (BOOL)isHidden;
- (id)background;
- (void)setTransition:(id)a0;
- (id)placeholders;
- (id)init;
- (void)setName:(id)a0;
- (id)defaultTheme;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (id)drawables;
- (id)parentSlideBase;
- (void)doneWithContent;
- (void)addSlideNumberPlaceholder:(id)a0;
- (id)defaultTableStyle;
- (id)defaultTextListStyle;
- (id)drawingTheme;
- (id)fontScheme;
- (void)generatePpt9Animations:(id)a0;
- (BOOL)hasPpt10Animations;
- (BOOL)hasPpt9Animations;
- (id)inheritedTextStyleForPlaceholderType:(int)a0;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(BOOL)a3;
- (id)parentTextStyleForTables;
- (id)placeholderWithType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)placeholderWithType:(int)a0 placeholderTypeIndex:(int)a1 useBaseTypeMatch:(BOOL)a2 overrideIndex:(BOOL)a3;
- (id)ppt2011Transition;
- (void)removeUnnecessaryOverrides;
- (void)setDefaultTableStyle:(id)a0;
- (void)setDrawables:(id)a0;
- (void)setDrawablesNoHierarchy:(id)a0;
- (void)setPpt2011Transition:(id)a0;
- (void)setPpt9AnimationDataForCacheItem:(id)a0 order:(int)a1 state:(id)a2;
- (void)setUpDrawablePropertyHierarchy;
- (void)setUpPropertyHierarchyForDrawable:(id)a0;
- (void)setUpPropertyHierarchyForDrawablePreservingEffectiveValues:(id)a0;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)styleMatrix;

@end
