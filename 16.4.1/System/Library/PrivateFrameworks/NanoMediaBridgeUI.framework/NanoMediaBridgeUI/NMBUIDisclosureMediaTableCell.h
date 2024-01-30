@class NMBUIDownloadProgressView;

@interface NMBUIDisclosureMediaTableCell : PSTableCell

@property (retain, nonatomic) NMBUIDownloadProgressView *downloadProgressView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_setDownloadState:(id)a0;
- (void)_handleDownloadIndicatorTapGesture:(id)a0;
- (BOOL)_shouldDisplayDownloadProgressViewForDownloadState:(id)a0;

@end
