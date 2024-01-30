@class NSString, _UIDocumentSearchListController, NSLayoutConstraint, UISearchController;

@interface _UIDocumentPickerSearchPaletteView : UIView <UISearchBarDelegate>

@property (retain, nonatomic) NSLayoutConstraint *searchFieldLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *searchFieldRightConstraint;
@property (retain, nonatomic) _UIDocumentSearchListController *resultsController;
@property (retain, nonatomic) UISearchController *searchController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 resultsController:(id)a1;
- (void)searchCanceled:(id)a0;

@end
