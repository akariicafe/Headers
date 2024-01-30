@interface CKChatItemLayoutUtilities : NSObject

+ (id)dynamicWidthLayoutSizeWithHeight:(double)a0;
+ (BOOL)nextMessageIsReplyForIndex:(unsigned long long)a0 allDatasourceItems:(id)a1;
+ (BOOL)needsAdditionalBracketPaddingForChatItem:(id)a0 prevChatItem:(id)a1;
+ (id)layoutSizeWithSize:(struct CGSize { double x0; double x1; })a0;
+ (double)adjustedBalloonTopSpacingWithSpacing:(double)a0 previousChatItem:(id)a1;
+ (double)adjustedTopSpacingForTextAlignmentInsetsWithSpacing:(double)a0 chatItem:(id)a1 previousChatItem:(id)a2;
+ (BOOL)nextItemIsOriginatorWithRepliesForIndex:(unsigned long long)a0 allDatasourceItems:(id)a1;
+ (id)transcriptVerticalEdgeSpacingForChatItem:(id)a0 previousChatItem:(id)a1 topSpacing:(double)a2 bottomSpacing:(double)a3;
+ (id)tapbackLayoutAnchorForAcknowledgmentChatItem:(id)a0;
+ (id)transcriptBalloonVerticalLayoutSpacingWithTopSpacing:(double)a0 bottomSpacing:(double)a1 previousChatItem:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeWithLayoutSize:(id)a0;
+ (id)layoutGroupForItem:(id)a0;
+ (id)balloonEdgeSpacingForItemWithLayoutEnvironment:(id)a0 orientation:(char)a1 itemSize:(struct CGSize { double x0; double x1; })a2 supplementaryItems:(id)a3;
+ (id)avatarSupplementaryItemForChatItem:(id)a0 layoutEnvironment:(id)a1;
+ (id)tapbackSupplementaryItemForChatItem:(id)a0 layoutEnvironment:(id)a1;

@end
