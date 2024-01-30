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
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (id)transcriptTraitCollection;
- (Class)balloonViewClass;
- (BOOL)canExport;
- (BOOL)canCopy;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)setTranscriptTraitCollection:(id)a0;
- (BOOL)canDelete;
- (id)visibleAssociatedMessageChatItems;
- (BOOL)canQuickSave;
- (void).cxx_destruct;
- (id)pasteboardItemProviders;
- (BOOL)shouldCacheSize;
- (void)_generateMediaObjects;
- (Class)cellClass;
- (BOOL)canForward;

@end
