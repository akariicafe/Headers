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

- (void)setTransition:(id)a0;
- (id)transition;
- (void)setIsHidden:(BOOL)a0;
- (id)animation;
- (void)setBackground:(id)a0;
- (id)colorScheme;
- (void)setName:(id)a0;
- (id)description;
- (id)background;
- (id)placeholders;
- (void).cxx_destruct;
- (id)init;
- (id)colorMap;
- (id)name;
- (BOOL)isHidden;
- (id)defaultTheme;
- (id)drawables;
- (id)styleMatrix;
- (id)fontScheme;
- (void)removeUnnecessaryOverrides;
- (id)drawingTheme;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (void)doneWithContent;
- (id)defaultTableStyle;
- (void)setDefaultTableStyle:(id)a0;
- (id)parentSlideBase;
- (id)placeholderWithType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (void)setDrawables:(id)a0;
- (void)addSlideNumberPlaceholder:(id)a0;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(BOOL)a3;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)defaultTextListStyle;
- (id)placeholderWithType:(int)a0 placeholderTypeIndex:(int)a1 useBaseTypeMatch:(BOOL)a2 overrideIndex:(BOOL)a3;
- (id)inheritedTextStyleForPlaceholderType:(int)a0;
- (void)setUpPropertyHierarchyForDrawable:(id)a0;
- (void)setUpPropertyHierarchyForDrawablePreservingEffectiveValues:(id)a0;
- (void)setDrawablesNoHierarchy:(id)a0;
- (void)setUpDrawablePropertyHierarchy;
- (void)setPpt9AnimationDataForCacheItem:(id)a0 order:(int)a1 state:(id)a2;
- (id)ppt2011Transition;
- (void)setPpt2011Transition:(id)a0;
- (BOOL)hasPpt10Animations;
- (BOOL)hasPpt9Animations;
- (void)generatePpt9Animations:(id)a0;

@end
