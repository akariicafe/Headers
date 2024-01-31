@interface CNPropertyAddressingGrammarEditingCell : CNPropertySimpleCell

+ (BOOL)wantsHorizontalLayout;

- (void)updateConstraints;
- (BOOL)allowsCellSelection;
- (void)updateWithPropertyItem:(id)a0;
- (id)valueView;

@end
