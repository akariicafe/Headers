@class ATXHeuristicDevice;

@interface ATXWalletDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)passesWithStyle:(id)a0 callback:(id /* block */)a1;
- (id)_extractRelevantSemanticTagsFromPass:(id)a0;
- (unsigned long long)_getPassStyleMaskForString:(id)a0;

@end
