@class UINavigationItem;

@interface VideosUI.LibraryGenresViewController : VUIBaseViewController <VUIMenuCollectionViewControllerDelegate> {
    void /* unknown type, empty encoding */ mediaLibrary;
    void /* unknown type, empty encoding */ menuController;
    void /* unknown type, empty encoding */ genres;
    void /* unknown type, empty encoding */ selectedGenre;
    void /* unknown type, empty encoding */ serviceRequest;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (void)didSelectMenuItemAtIndexPath:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)vui_viewDidLoad;
- (void)vui_viewDidLayoutSubviews;

@end
