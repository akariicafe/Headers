@interface OADTableStyleFlattener : OADTableStyleResolver

- (void)applyCellPropertiesToTextBodyPropertiesInCell:(id)a0;
- (void)applyResolvedPartStyle:(id)a0 leftStroke:(id)a1 rightStroke:(id)a2 topStroke:(id)a3 bottomStroke:(id)a4 toCell:(id)a5;
- (void)applyTextStyle:(id)a0 toParagraph:(id)a1;

@end
