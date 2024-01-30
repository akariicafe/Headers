@class NSString;

@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener> {
    struct RefPtr<WebCore::FileChooser, WTF::DumbPtrTraits<WebCore::FileChooser> > { struct FileChooser *m_ptr; } _chooser;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)chooseFilename:(id)a0 displayString:(id)a1 iconImage:(struct CGImage { } *)a2;
- (void)chooseFilenames:(id)a0 displayString:(id)a1 iconImage:(struct CGImage { } *)a2;
- (id).cxx_construct;
- (id)initWithChooser:(struct FileChooser { unsigned int x0; struct FileChooserClient *x1; struct FileChooserSettings { BOOL x0; BOOL x1; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct String *x0; unsigned int x1; unsigned int x2; } x2; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct String *x0; unsigned int x1; unsigned int x2; } x3; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct String *x0; unsigned int x1; unsigned int x2; } x4; int x5; } x2; } *)a0;
- (void)chooseFilename:(id)a0;
- (void)chooseFilenames:(id)a0;

@end
