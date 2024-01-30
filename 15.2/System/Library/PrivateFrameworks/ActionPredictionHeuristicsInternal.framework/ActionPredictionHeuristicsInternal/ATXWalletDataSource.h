@class ATXHeuristicDevice;

@interface ATXWalletDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void)passesWithStyle:(id)a0 callback:(id /* block */)a1;
- (unsigned long long)_getPassStyleMaskForString:(id)a0;
- (void).cxx_destruct;
- (id)_extractRelevantSemanticTagsFromPass:(id)a0;

@end
