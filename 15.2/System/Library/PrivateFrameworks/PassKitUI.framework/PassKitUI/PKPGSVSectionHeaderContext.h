@class UIView;
@protocol PKPGSVSectionHeaderView, PKPGSVSectionSubheaderView;

@interface PKPGSVSectionHeaderContext : NSObject

@property (readonly, nonatomic) UIView<PKPGSVSectionHeaderView> *headerView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } headerMargins;
@property (readonly, nonatomic) UIView<PKPGSVSectionSubheaderView> *subheaderView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } subheaderMargins;
@property (readonly, nonatomic) double totalHeight;
@property (readonly, nonatomic) double headerHeight;

+ (id)createUpdatedHeaderContextForGroupStackView:(id)a0 passType:(unsigned long long)a1 currentContext:(id)a2 allowHeader:(BOOL)a3 allowSubheader:(BOOL)a4;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (double)_headerHeight;
- (id)initWithHeaderView:(id)a0 headerMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 subheaderView:(id)a2 subheaderMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForHeaderViewInContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForSubheaderViewInContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_subheaderHeight;
- (struct CGPoint { double x0; double x1; })positionForHeaderViewInContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })positionForSubheaderViewInContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
