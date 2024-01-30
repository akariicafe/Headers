@class NSArray;

@interface QLDataSource : NSObject <QLPreviewItemProvider> {
    NSArray *_previewItems;
}

- (void).cxx_destruct;
- (id)initWithPreviewItems:(id)a0;
- (void)previewItemAtIndex:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;

@end
