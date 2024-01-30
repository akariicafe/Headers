@class NSURL;

@interface _TtC3ECSP33_83682B33CF2DD64B57A89285DAFFAE8A13SourceWatcher : NSObject <NSFilePresenter> {
    void /* unknown type, empty encoding */ handler;
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ presentedItemURL;
}

@property (nonatomic, copy) NSURL *presentedItemURL;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ presentedItemOperationQueue;

- (id)init;
- (void).cxx_destruct;
- (void)presentedSubitemDidAppearAtURL:(id)a0;
- (void)presentedSubitemDidChangeAtURL:(id)a0;

@end
