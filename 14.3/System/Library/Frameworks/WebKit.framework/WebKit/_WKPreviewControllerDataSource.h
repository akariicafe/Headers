@class NSString;

@interface _WKPreviewControllerDataSource : NSObject <QLPreviewControllerDataSource, ARQuickLookWebKitItemDelegate> {
    struct RetainPtr<NSItemProvider> { void *m_ptr; } _itemProvider;
    struct RetainPtr<ARQuickLookWebKitItem> { void *m_ptr; } _item;
    struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *m_ptr; } m_impl; } m_string; unsigned char m_isValid : 1; unsigned char m_protocolIsInHTTPFamily : 1; unsigned char m_cannotBeABaseURL : 1; unsigned char m_portLength : 3; unsigned int m_schemeEnd : 26; unsigned int m_userStart; unsigned int m_userEnd; unsigned int m_passwordEnd; unsigned int m_hostEnd; unsigned int m_pathAfterLastSlash; unsigned int m_pathEnd; unsigned int m_queryEnd; } _originatingPageURL;
    struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *m_ptr; } m_impl; } m_string; unsigned char m_isValid : 1; unsigned char m_protocolIsInHTTPFamily : 1; unsigned char m_cannotBeABaseURL : 1; unsigned char m_portLength : 3; unsigned int m_schemeEnd : 26; unsigned int m_userStart; unsigned int m_userEnd; unsigned int m_passwordEnd; unsigned int m_hostEnd; unsigned int m_pathAfterLastSlash; unsigned int m_pathEnd; unsigned int m_queryEnd; } _downloadedURL;
    struct SystemPreviewController { struct WebPageProxy *x0; struct SystemPreviewInfo { struct ElementContext { struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x0; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long x0; } x1; struct ObjectIdentifier<WebCore::DocumentIdentifierType> { unsigned long long x0; } x2; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long x0; } x3; } x0; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x1; BOOL x2; } x1; struct RetainPtr<QLPreviewController> { void *x0; } x2; struct RetainPtr<_WKPreviewControllerDelegate> { void *x0; } x3; struct RetainPtr<_WKPreviewControllerDataSource> { void *x0; } x4; } *_previewController;
}

@property (copy) id /* block */ completionHandler;
@property (copy) NSString *mimeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finish:(struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x0; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 3; unsigned int x5 : 26; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setProgress:(float)a0;
- (void)previewItem:(id)a0 didReceiveMessage:(id)a1;
- (id)initWithSystemPreviewController:(struct SystemPreviewController { struct WebPageProxy *x0; struct SystemPreviewInfo { struct ElementContext { struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x0; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long x0; } x1; struct ObjectIdentifier<WebCore::DocumentIdentifierType> { unsigned long long x0; } x2; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long x0; } x3; } x0; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x1; BOOL x2; } x1; struct RetainPtr<QLPreviewController> { void *x0; } x2; struct RetainPtr<_WKPreviewControllerDelegate> { void *x0; } x3; struct RetainPtr<_WKPreviewControllerDataSource> { void *x0; } x4; } *)a0 MIMEType:(id)a1 originatingPageURL:(struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x0; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 3; unsigned int x5 : 26; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; })a2;
- (id).cxx_construct;
- (void)failWithError:(id)a0;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;

@end
