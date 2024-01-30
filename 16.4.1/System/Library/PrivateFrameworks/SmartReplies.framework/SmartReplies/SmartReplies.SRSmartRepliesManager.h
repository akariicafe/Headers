@class _TtC12SmartReplies21SRSmartRepliesManager;

@interface SmartReplies.SRSmartRepliesManager : NSObject {
    void /* unknown type, empty encoding */ experimentsManager;
    void /* unknown type, empty encoding */ actionMetadataController;
    void /* unknown type, empty encoding */ textPreprocessor;
}

@property (class, nonatomic, readonly) _TtC12SmartReplies21SRSmartRepliesManager *shared;

- (id)init;
- (void).cxx_destruct;
- (id)suggestionsFor:(id)a0;
- (void)suggestionsFor:(id)a0 completion:(id /* block */)a1;

@end
