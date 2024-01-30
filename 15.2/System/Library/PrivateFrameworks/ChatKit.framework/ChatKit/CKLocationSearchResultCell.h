@class CKSpotlightQueryResult, NSString, UIVisualEffectView, UILabel;

@interface CKLocationSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell>

@property (retain, nonatomic) UILabel *placeLabel;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) CKSpotlightQueryResult *result;
@property (retain, nonatomic) NSString *searchText;
@property (nonatomic) unsigned long long mode;
@property (readonly, copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void)_thumbnailGenerated:(id)a0;
- (void)refreshForSearchTextIfNeeded:(id)a0;
- (void)configureWithQueryResult:(id)a0 searchText:(id)a1 mode:(unsigned long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)_configurePlaceLabelWithResult:(id)a0 searchText:(id)a1;
- (void)dealloc;

@end
