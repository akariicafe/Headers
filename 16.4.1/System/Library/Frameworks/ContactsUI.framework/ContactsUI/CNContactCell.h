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
- (void)prepareForReuse;
- (void)dealloc;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_setAnimating:(BOOL)a0 clippingAdjacentCells:(BOOL)a1;
- (void)performAccessoryAction;
- (void)performDefaultAction;
- (BOOL)shouldPerformAccessoryAction;
- (BOOL)shouldPerformDefaultAction;

@end
