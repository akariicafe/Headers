@class NSArray, NSString;

@interface CKQLPreviewControllerDataSource : NSObject <QLPreviewControllerConformingDataSource, QLPreviewControllerDataSource>

@property (copy, nonatomic) NSArray *previewItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (void).cxx_destruct;

@end
