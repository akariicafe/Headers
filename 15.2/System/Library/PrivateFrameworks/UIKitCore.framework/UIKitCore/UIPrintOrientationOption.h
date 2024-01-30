@interface UIPrintOrientationOption : UIPrintOption

- (id)summary;
- (BOOL)shouldShow;
- (id)printOptionTableViewCell;
- (void)updateOrientation:(id)a0;

@end
