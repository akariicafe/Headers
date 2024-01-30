@interface PSUICellularDataPlanTableCell : PSUICarrierSpacePlanTableCell

- (id)planStatus;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canBeChecked;
- (id)detailText;
- (id)primaryText;
- (id)_cellularPlanItem;
- (id)planDescription;

@end
