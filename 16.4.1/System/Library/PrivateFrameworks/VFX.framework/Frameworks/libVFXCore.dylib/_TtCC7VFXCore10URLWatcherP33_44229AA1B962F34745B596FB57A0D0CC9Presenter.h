@class NSURL, NSOperationQueue;

@interface _TtCC7VFXCore10URLWatcherP33_44229AA1B962F34745B596FB57A0D0CC9Presenter : NSObject <NSFilePresenter> {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ entity;
    void /* unknown type, empty encoding */ lastModificationDate;
    void /* unknown type, empty encoding */ shouldReplicate;
    void /* unknown type, empty encoding */ manager;
}

@property (nonatomic, readonly) NSURL *presentedItemURL;
@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;

- (id)init;
- (void).cxx_destruct;
- (void)presentedItemDidChange;

@end
