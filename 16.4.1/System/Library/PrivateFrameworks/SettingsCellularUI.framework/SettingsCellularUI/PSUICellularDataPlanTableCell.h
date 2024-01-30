@interface PSUICellularDataPlanTableCell : PSUICarrierSpacePlanTableCell

- (id)detailText;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (id)primaryText;
- (id)planStatus;
- (BOOL)canBeChecked;
- (id)planDescription;
- (id)_cellularPlanItem;

@end
