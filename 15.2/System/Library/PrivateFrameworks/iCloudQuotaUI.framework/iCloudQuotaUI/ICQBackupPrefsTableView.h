@interface ICQBackupPrefsTableView : UITableView {
    BOOL _scrollsOnNextResize;
}

- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)scrollToBottomOnNextResize;

@end
