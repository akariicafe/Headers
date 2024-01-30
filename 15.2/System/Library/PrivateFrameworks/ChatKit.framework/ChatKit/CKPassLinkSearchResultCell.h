@class NSString, LPWebLinkPresentationProperties, LPLinkView;

@interface CKPassLinkSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell>

@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) LPLinkView *linkView;
@property (retain, nonatomic) LPWebLinkPresentationProperties *linkMetadata;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void)_metadataGenerated:(id)a0;
- (void)refreshForSearchTextIfNeeded:(id)a0;
- (void)configureWithQueryResult:(id)a0 searchText:(id)a1 mode:(unsigned long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)previewSnapshot;
- (void)setLinkPresentationProperties:(id)a0 forSearchResult:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didMoveToWindow;

@end
