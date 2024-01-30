@class OADTextListStyle;

@interface OADTableUnnecessaryOverrideRemover : OADTableStyleResolver

@property (readonly, nonatomic) OADTextListStyle *parentTextListStyle;

- (void).cxx_destruct;
- (void)applyResolvedPartStyle:(id)a0 leftStroke:(id)a1 rightStroke:(id)a2 topStroke:(id)a3 bottomStroke:(id)a4 toCell:(id)a5;
- (void)applyTextBodyPropertiesToCellPropertiesInCell:(id)a0;
- (void)applyTextStyle:(id)a0 toParagraph:(id)a1;
- (void)fixFill:(id)a0;
- (id)initWithTable:(id)a0 parentTextListStyle:(id)a1;
- (void)removeUnnecessaryOverridesInCellProperties:(id)a0 strokeType:(int)a1 resolvedStroke:(id)a2;

@end
