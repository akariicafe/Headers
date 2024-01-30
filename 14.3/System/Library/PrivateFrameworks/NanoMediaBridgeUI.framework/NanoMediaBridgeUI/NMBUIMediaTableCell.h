@class NMBUIDownloadProgressView, UIButton, UIStackView;

@interface NMBUIMediaTableCell : PSSwitchTableCell {
    UIStackView *_accessoryStackView;
    NMBUIDownloadProgressView *_downloadProgressView;
    UIButton *_errorButton;
}

+ (double)defaultCellHeight;
+ (struct CGSize { double x0; double x1; })artworkSize;
+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setDownloadState:(unsigned long long)a0 progress:(double)a1;
- (void)setDownloadState:(unsigned long long)a0 progress:(double)a1 animated:(BOOL)a2;
- (id)downloadProgressView;

@end
