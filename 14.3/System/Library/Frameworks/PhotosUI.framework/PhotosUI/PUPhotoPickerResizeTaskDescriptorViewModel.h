@class UIMenu, PXInfoUpdater, NSString, PUPhotoPickerResizeTaskDescriptor, NSObject;
@protocol OS_dispatch_queue, PUPhotoPickerResizeTaskDescriptorViewModelDelegate;

@interface PUPhotoPickerResizeTaskDescriptorViewModel : PXObservable <PXInfoProvider, PXInfoUpdaterObserver>

@property (retain, nonatomic) PXInfoUpdater *localizedFileSizeDescriptionUpdater;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *localizedFileSizeDescriptionUpdaterQueue;
@property (readonly, nonatomic) PUPhotoPickerResizeTaskDescriptor *resizeTaskDescriptor;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedFileSizeDescription;
@property (readonly, nonatomic) UIMenu *fileSizeMenu;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (weak, nonatomic) id<PUPhotoPickerResizeTaskDescriptorViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setResizeTaskDescriptor:(id)a0;
- (void)invalidateAssetsForResizing;
- (id)init;
- (void).cxx_destruct;
- (id)_infoDictionaryForLocalizedTitle:(id)a0 localizedFileSizeDescription:(id)a1;
- (void)setFileSizeMenu:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)infoUpdaterDidUpdate:(id)a0;
- (void)setDownloading:(BOOL)a0;
- (id)requestInfoOfKind:(id)a0 withResultHandler:(id /* block */)a1;

@end
