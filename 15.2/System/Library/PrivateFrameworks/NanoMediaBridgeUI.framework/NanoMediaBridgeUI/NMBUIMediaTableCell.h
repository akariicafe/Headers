@class NMBUIDownloadProgressView, UIButton, UIStackView;

@interface NMBUIMediaTableCell : PSSwitchTableCell {
    UIStackView *_accessoryStackView;
    NMBUIDownloadProgressView *_downloadProgressView;
    UIButton *_errorButton;
}

+ (long long)cellStyle;
+ (double)defaultCellHeight;
+ (struct CGSize { double x0; double x1; })artworkSize;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)prepareForReuse;
- (void)setDownloadState:(unsigned long long)a0 progress:(double)a1;
- (id)downloadProgressView;
- (void)setDownloadState:(unsigned long long)a0 progress:(double)a1 animated:(BOOL)a2;

@end
