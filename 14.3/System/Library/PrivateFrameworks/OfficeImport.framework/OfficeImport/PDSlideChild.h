@class OADThemeOverrides, OADColorMap;

@interface PDSlideChild : PDSlideBase {
    BOOL mShowMasterPlaceholderAnimations;
    BOOL mShowMasterShapes;
    OADThemeOverrides *mThemeOverrides;
    OADColorMap *mColorMapOverride;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)colorMap;
- (id)colorScheme;
- (id)styleMatrix;
- (id)fontScheme;
- (BOOL)showMasterShapes;
- (id)drawingTheme;
- (id)themeOverrides;
- (void)doneWithContent;
- (void)setColorMapOverride:(id)a0;
- (void)setShowMasterShapes:(BOOL)a0;
- (id)defaultTextListStyle;
- (id)colorMapOverride;
- (BOOL)showMasterPlaceholderAnimations;
- (void)setShowMasterPlaceholderAnimations:(BOOL)a0;

@end
