@class NSData, NSMutableString;

@interface CPArchive : NSObject <CPDisposable> {
    struct __CFArray { } *selections;
    struct __CFArray { } *imageNodes;
    NSMutableString *plainText;
    NSMutableString *htmlString;
    NSMutableString *htmlStringNoImages;
    NSData *webArchiveData;
}

- (id)html;
- (id)init;
- (id)webArchiveData;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)plainText;
- (void)addSelection:(struct CGPDFSelection { } *)a0;

@end
