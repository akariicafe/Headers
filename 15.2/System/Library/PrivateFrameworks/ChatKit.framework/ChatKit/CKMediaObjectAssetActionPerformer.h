@class CKMessagePartChatItem;
@protocol CKMediaObjectAssetActionHelper;

@interface CKMediaObjectAssetActionPerformer : PXAssetActionPerformer

@property (retain, nonatomic) CKMessagePartChatItem *chatItem;
@property (weak, nonatomic) id<CKMediaObjectAssetActionHelper> chatActionHelper;

+ (BOOL)canPerformWithActionManager:(id)a0 selectionSnapshot:(id)a1;
+ (BOOL)canPerformOnImplicitSelection;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformWithActionManager:(id)a0;
+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (id)createPreviewActionWithActionManager:(id)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;

@end
