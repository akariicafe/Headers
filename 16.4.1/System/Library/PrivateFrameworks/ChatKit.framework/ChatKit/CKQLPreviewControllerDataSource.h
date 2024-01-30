@class NSArray;

@interface CKQLPreviewControllerDataSource : NSObject <QLPreviewControllerDataSource>

@property (copy, nonatomic) NSArray *previewItems;

- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
