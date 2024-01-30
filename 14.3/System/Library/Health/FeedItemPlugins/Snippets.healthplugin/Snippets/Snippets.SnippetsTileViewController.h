@class NSString;

@interface Snippets.SnippetsTileViewController : UIViewController {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ glyph;
    void /* unknown type, empty encoding */ hkType;
    void /* unknown type, empty encoding */ detail;
    void /* unknown type, empty encoding */ snippetTileViewProvider;
    void /* unknown type, empty encoding */ snippetView;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)updateLabels;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)dayChanged;

@end
