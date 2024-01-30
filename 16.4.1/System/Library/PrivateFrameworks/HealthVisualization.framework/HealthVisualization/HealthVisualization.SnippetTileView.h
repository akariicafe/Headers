@class NSString;

@interface HealthVisualization.SnippetTileView : UIView {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ glyph;
    void /* unknown type, empty encoding */ hkType;
    void /* unknown type, empty encoding */ detail;
    void /* unknown type, empty encoding */ snippetTileViewProvider;
    void /* unknown type, empty encoding */ snippetView;
    void /* unknown type, empty encoding */ baseIdentifier;
}

@property (nonatomic, readonly) NSString *description;

- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)updateLabels;
- (void)dayChanged;

@end
