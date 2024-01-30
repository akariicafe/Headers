@interface NewsUI2.NewsWebArchiveURLSchemeHandler : NSObject <SWURLSchemeHandler> {
    void /* unknown type, empty encoding */ webArchiveService;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ task;

- (void)finish;
- (void)cancel;
- (id)init;
- (void)start;
- (void).cxx_destruct;

@end
