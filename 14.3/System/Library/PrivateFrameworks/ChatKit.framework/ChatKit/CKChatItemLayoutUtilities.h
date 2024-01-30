@interface CKChatItemLayoutUtilities : NSObject

+ (id)balloonEdgeSpacingForItemWithLayoutEnvironment:(id)a0 orientation:(char)a1 itemSize:(struct CGSize { double x0; double x1; })a2 supplementaryItems:(id)a3;
+ (id)tapbackSupplementaryItemForChatItem:(id)a0 layoutEnvironment:(id)a1;
+ (id)layoutSizeWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)layoutGroupForItem:(id)a0;
+ (id)avatarSupplementaryItemForChatItem:(id)a0 layoutEnvironment:(id)a1;
+ (id)tapbackLayoutAnchorForAcknowledgmentChatItem:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeWithLayoutSize:(id)a0;
+ (id)transcriptBalloonVerticalLayoutSpacingWithTopSpacing:(double)a0 layoutEnvironment:(id)a1;

@end
