@interface UIPrintTwoSidedOption : UIPrintOption

- (id)summary;
- (BOOL)shouldShow;
- (id)printOptionTableViewCell;
- (void)updateDuplex:(id)a0;

@end
