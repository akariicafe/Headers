@class CALayer, NSString, UITableView;
@protocol CKDetailsSearchResultsFooterCellDelegate;

@interface CKDetailsSearchResultsFooterCell : UICollectionViewCell <UITableViewDelegate, UITableViewDataSource, CKSearchResultSupplementryCell>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) CALayer *topHairline;
@property (retain, nonatomic) CALayer *bottomHairline;
@property (nonatomic) id<CKDetailsSearchResultsFooterCellDelegate> delegate;
@property (nonatomic) unsigned long long sectionIndex;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;

+ (id)reuseIdentifier;
+ (id)supplementaryViewType;
+ (double)desiredZPosition;

- (void)layoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
