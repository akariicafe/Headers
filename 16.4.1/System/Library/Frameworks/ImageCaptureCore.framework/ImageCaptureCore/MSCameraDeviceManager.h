@interface MSCameraDeviceManager : ICDeviceManager

- (void)getFileDataImp:(id)a0;
- (void)notifyPtpEvent:(id)a0;
- (long long)checkFile:(id)a0 andDevice:(id)a1;
- (struct CGSize { double x0; double x1; })cropThumbSize:(struct CGSize { double x0; double x1; })a0 fullSize:(struct CGSize { double x0; double x1; })a1 finalSize:(struct CGSize { double x0; double x1; })a2;
- (void)deleteFileImp:(id)a0;
- (id)deviceManagerConnection;
- (void)downloadFileImp:(id)a0;
- (void)ejectImp:(id)a0;
- (void)executeCompletionBlockWithErrorCode:(long long)a0 info:(id)a1 file:(id)a2 completionDict:(id)a3 completionBlk:(id /* block */)a4;
- (void)getFileMetadataImp:(id)a0;
- (void)getFileThumbnailImp:(id)a0;
- (void)notifyAddedItems:(id)a0;
- (void)notifyRemovedItems:(id)a0;
- (void)notifyStatus:(id)a0;
- (void)notifyUpdatedItems:(id)a0;
- (struct CGImage { } *)removeLetterboxFromThumbnail:(struct CGImage { } *)a0 fullSize:(struct CGSize { double x0; double x1; })a1;
- (void)startDeviceWithHandle:(id)a0;
- (void)syncClockImp:(id)a0;
- (void)updateCameraFile:(id)a0 withInfo:(id)a1;
- (void)updateCameraFolder:(id)a0 withInfo:(id)a1;

@end
