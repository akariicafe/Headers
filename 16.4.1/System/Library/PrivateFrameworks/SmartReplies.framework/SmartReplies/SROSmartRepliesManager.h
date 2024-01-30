@class _TtC12SmartReplies21SRSmartRepliesManager;

@interface SROSmartRepliesManager : NSObject {
    _TtC12SmartReplies21SRSmartRepliesManager *_backingManager;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)suggestionsForRequest:(id)a0;
- (void)suggestionsForRequest:(id)a0 withCompletion:(id /* block */)a1;

@end
