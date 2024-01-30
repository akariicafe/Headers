@class NSData, NSMutableString;

@interface CPArchive : NSObject <CPDisposable> {
    struct __CFArray { } *selections;
    struct __CFArray { } *imageNodes;
    NSMutableString *plainText;
    NSMutableString *htmlString;
    NSMutableString *htmlStringNoImages;
    NSData *webArchiveData;
}

- (void)dispose;
- (id)html;
- (id)webArchiveData;
- (void)finalize;
- (id)init;
- (void)dealloc;
- (id)plainText;
- (void)addSelection:(struct CGPDFSelection { } *)a0;

@end
