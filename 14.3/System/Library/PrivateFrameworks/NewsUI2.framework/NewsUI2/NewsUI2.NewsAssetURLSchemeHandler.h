@interface NewsUI2.NewsAssetURLSchemeHandler : NSObject <SWURLSchemeHandler> {
    void /* unknown type, empty encoding */ assetFetchService;
    void /* unknown type, empty encoding */ resourceIdentifier;
    void /* unknown type, empty encoding */ cancelHandler;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ task;

- (void)cancel;
- (void)finish;
- (id)init;
- (void).cxx_destruct;
- (void)start;

@end
