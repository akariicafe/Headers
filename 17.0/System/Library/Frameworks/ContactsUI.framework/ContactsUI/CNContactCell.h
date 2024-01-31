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

- (void)dealloc;
- (void)prepareForReuse;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setAnimating:(BOOL)a0 clippingAdjacentCells:(BOOL)a1;
- (void)performAccessoryAction;
- (void)performDefaultAction;
- (BOOL)shouldPerformAccessoryAction;
- (BOOL)shouldPerformDefaultAction;

@end
