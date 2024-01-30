@class NSString;
@protocol WKShareSheetDelegate;

@interface WKShareSheet : NSObject <UIAdaptivePresentationControllerDelegate> {
    struct RetainPtr<NSURL> { void *m_ptr; } _temporaryFileShareDirectory;
    struct WeakObjCPtr<WKWebView> { id m_weakReference; } _webView;
    struct WeakObjCPtr<id<WKShareSheetDelegate> > { id m_weakReference; } _delegate;
    struct CompletionHandler<void (bool)> { struct Function<void (bool)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct CallableWrapperBase<void, bool> *__value_; } __ptr_; } m_callableWrapper; } m_function; } _completionHandler;
    struct RetainPtr<UIActivityViewController> { void *m_ptr; } _shareSheetViewController;
    struct RetainPtr<UIViewController> { void *m_ptr; } _presentationViewController;
    BOOL _didShareSuccessfully;
}

@property (weak, nonatomic) id<WKShareSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTemporarySharingDirectory;
+ (id)writeFileToShareableURL:(id)a0 data:(id)a1 temporaryDirectory:(id)a2;
+ (id)createRandomSharingDirectoryForFile:(id)a0;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)presentWithShareDataArray:(id)a0 inRect:(struct Optional<WebCore::FloatRect> { BOOL x0; union constexpr_storage_t<WebCore::FloatRect> { unsigned char x0; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x1; } x1; })a1;
- (id).cxx_construct;
- (void)presentWithParameters:(const struct ShareDataWithParsedURL { struct ShareData { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x0; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x1; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x2; struct Vector<WTF::RefPtr<WebCore::File, WTF::DumbPtrTraits<WebCore::File> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct RefPtr<WebCore::File, WTF::DumbPtrTraits<WebCore::File> > *x0; unsigned int x1; unsigned int x2; } x3; } x0; struct Optional<WTF::URL> { BOOL x0; union storage_t<WTF::URL> { unsigned char x0; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x0; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 3; unsigned int x5 : 26; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } x1; } x1; } x1; struct Vector<WebCore::RawFile, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct RawFile *x0; unsigned int x1; unsigned int x2; } x2; } *)a0 inRect:(struct Optional<WebCore::FloatRect> { BOOL x0; union constexpr_storage_t<WebCore::FloatRect> { unsigned char x0; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x1; } x1; })a1 completionHandler:(struct CompletionHandler<void (bool)> { struct Function<void (bool)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct CallableWrapperBase<void, bool> *x0; } x0; } x0; } x0; } *)a2;
- (void)dismiss;

@end
