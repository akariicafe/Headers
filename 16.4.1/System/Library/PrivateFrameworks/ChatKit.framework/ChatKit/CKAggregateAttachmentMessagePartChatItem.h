@class NSArray, NSURL, CKMediaObjectAssetDataSource, UITraitCollection;

@interface CKAggregateAttachmentMessagePartChatItem : CKMessagePartChatItem {
    BOOL _hasCheckedForMomentShareURL;
    UITraitCollection *_transcriptTraitCollection;
}

@property (retain, nonatomic) NSArray *aggregateChatItems;
@property (retain, nonatomic) NSArray *mediaObjects;
@property (retain, nonatomic) NSArray *aggregatedVisibleAssociatedMessageChatItems;
@property (retain, nonatomic) NSArray *aggregatedNonTapbackVisibleAssociatedMessageChatItems;
@property (retain, nonatomic) CKMediaObjectAssetDataSource *dataSource;
@property (copy, nonatomic) NSURL *momentShareURL;
@property (readonly, copy, nonatomic) NSArray *transferGUIDs;
@property (readonly, nonatomic) NSArray *visibleAssociatedMessageChatItemsIncludingTapbacks;

- (unsigned long long)layoutType;
- (BOOL)canCopy;
- (BOOL)canForward;
- (Class)cellClass;
- (BOOL)canDelete;
- (void).cxx_destruct;
- (BOOL)canExport;
- (BOOL)shouldCacheSize;
- (void)_generateMediaObjects;
- (Class)balloonViewClass;
- (BOOL)canPerformQuickAction;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)pasteboardItemProviders;
- (void)setTranscriptTraitCollection:(id)a0;
- (id)transcriptTraitCollection;
- (id)visibleAssociatedMessageChatItems;

@end
