@class NSString;
@protocol QLPreviewControllerConformingDataSource, QLPreviewItem, QLPreviewControllerConformingDelegate;

@interface QLPreviewMockScene : NSObject <QLPreviewControllerConforming>

@property (weak, nonatomic) id<QLPreviewControllerConformingDataSource> dataSource;
@property (weak, nonatomic) id<QLPreviewControllerConformingDelegate> delegate;
@property long long currentPreviewItemIndex;
@property (readonly) id<QLPreviewItem> currentPreviewItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestPreviewMockSceneActivation;
+ (BOOL)canPreviewItem:(id)a0;

- (void)reloadData;
- (id)init;
- (void).cxx_destruct;
- (void)presentPreview;
- (void)dismissPreview;
- (void)refreshCurrentPreviewItem;

@end
