@class NSString, UIDateLabel, UILabel, CKSearchAvatarSupplementryView;

@interface CKAttachmentSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell>

@property (nonatomic) BOOL suppressAvatars;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIDateLabel *dateLabel;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) CKSearchAvatarSupplementryView *avatarView;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } avatarOffsetLTR;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } avatarOffsetRTL;
@property (readonly, nonatomic) double editModeHorizontalOffset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)setSelected:(BOOL)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)_thumbnailGenerated:(id)a0;
- (void)configureWithQueryResult:(id)a0 searchText:(id)a1 mode:(unsigned long long)a2;
- (void)refreshForSearchTextIfNeeded:(id)a0;

@end
