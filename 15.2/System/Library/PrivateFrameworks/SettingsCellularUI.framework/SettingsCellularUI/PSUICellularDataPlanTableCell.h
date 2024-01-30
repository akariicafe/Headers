@interface PSUICellularDataPlanTableCell : PSUICarrierSpacePlanTableCell

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (id)planStatus;
- (id)primaryText;
- (id)detailText;
- (BOOL)canBeChecked;
- (id)_cellularPlanItem;
- (id)planDescription;

@end
