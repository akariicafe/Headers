@class NSURL;

@interface TranslationUI.SharedTranslations : NSObject <NSFilePresenter> {
    void /* unknown type, empty encoding */ presentedItemURL;
    void /* unknown type, empty encoding */ _translations;
    void /* unknown type, empty encoding */ fileAccessQueue;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ presentedItemOperationQueue;
@property (nonatomic, copy) NSURL *presentedItemURL;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)presentedItemDidChange;

@end
