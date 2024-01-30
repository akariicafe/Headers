@class _SFWebArchiveProvider, LPFileMetadata;

@interface _SFWebArchiveActivityItemProvider : _SFActivityItemProvider {
    _SFWebArchiveProvider *_webArchiveProvider;
    LPFileMetadata *_linkPreviewFileMetadata;
}

- (id)item;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (void).cxx_destruct;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)_webArchiveItemProvider;
- (id)initWithWebArchiveProvider:(id)a0;

@end
