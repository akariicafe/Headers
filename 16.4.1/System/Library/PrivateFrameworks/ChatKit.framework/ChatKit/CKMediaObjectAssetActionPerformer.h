@class CKMessagePartChatItem;
@protocol CKMediaObjectAssetActionHelper;

@interface CKMediaObjectAssetActionPerformer : PXAssetActionPerformer

@property (retain, nonatomic) CKMessagePartChatItem *chatItem;
@property (weak, nonatomic) id<CKMediaObjectAssetActionHelper> chatActionHelper;

+ (BOOL)canPerformOnImplicitSelection;
+ (BOOL)canPerformWithActionManager:(id)a0;
+ (BOOL)canPerformWithActionManager:(id)a0 selectionSnapshot:(id)a1;
+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (id)createPreviewActionWithActionManager:(id)a0 handler:(id /* block */)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;

- (void).cxx_destruct;

@end
