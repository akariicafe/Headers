@class AssistantVoiceDownloadingView;

@interface AssistantVoiceDownloadingCell : PSTableCell {
    AssistantVoiceDownloadingView *_downloadingView;
    BOOL _downloading;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)setDownloading:(BOOL)a0;
- (void).cxx_destruct;

@end
