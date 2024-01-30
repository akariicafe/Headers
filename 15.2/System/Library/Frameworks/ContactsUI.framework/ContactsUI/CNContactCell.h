@class NSArray, CNCardGroupItem;

@interface CNContactCell : UITableViewCell <CNIndentableCell> {
    NSArray *_constantConstraints;
    NSArray *_variableConstraints;
}

@property (readonly, nonatomic) NSArray *constantConstraints;
@property (readonly, nonatomic) NSArray *variableConstraints;
@property (readonly, nonatomic) double minCellHeight;
@property (retain, nonatomic) CNCardGroupItem *cardGroupItem;
@property (nonatomic) BOOL showSeparator;
@property (readonly, nonatomic) BOOL hasGapBetweenSeparatorAndTrailingEdge;

+ (BOOL)shouldIndentWhileEditing;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)shouldPerformDefaultAction;
- (void)prepareForReuse;
- (void)dealloc;
- (void)performDefaultAction;
- (BOOL)shouldPerformAccessoryAction;
- (void)performAccessoryAction;
- (void)_setAnimating:(BOOL)a0 clippingAdjacentCells:(BOOL)a1;

@end
