@class NSString, UIBezierPath, UIView, NSMutableArray, SUCellConfiguration;

@interface SUTableCellContentView : UIView <SUCellConfigurationView> {
    UIBezierPath *_clipPath;
    unsigned char _drawAsDisabled : 1;
    unsigned char _highlighted : 1;
    unsigned char _highlightsOnlyContentView : 1;
    UIView *_overlayView;
    NSMutableArray *_subviews;
    unsigned char _useSubviewLayout : 1;
}

@property (nonatomic) BOOL usesSubviews;
@property (nonatomic) int clipCorners;
@property (retain, nonatomic) SUCellConfiguration *configuration;
@property (nonatomic, getter=isDeleteConfirmationVisible) BOOL deleteConfirmationVisisble;
@property (nonatomic) BOOL drawAsDisabled;
@property (nonatomic) BOOL highlightsOnlyContentView;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUsesSubviews:(BOOL)a0 animated:(BOOL)a1;
- (id)_clipPath;
- (void)_reloadSubviewsForConfiguration;
- (void)reloadView;
- (void)_reloadSubviewAlphasAnimated:(BOOL)a0;
- (void)_updateDisabledStyleForSubviews;
- (void)_stopUsingSubviewLayout;
- (void)_startUsingSubviewLayout;
- (id)_clippedImageForImage:(id)a0;
- (void)_removeSubviewsForConfiguration;

@end
