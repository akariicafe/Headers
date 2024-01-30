@class NSString, UIPDFPageImageCache;
@protocol UIPDFDocumentDelegate, NSObject;

@interface UIPDFDocument : NSObject {
    unsigned long long _numberOfPages;
    double _cachedWidth;
    double _cachedHeight;
    NSString *_documentID;
    NSString *_documentName;
    UIPDFPageImageCache *_pageImageCache;
    unsigned long long _imageCacheCount;
    unsigned long long _imageCacheLookAhead;
    double _imageCacheResolution;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _imageCacheLock;
    UIPDFPageImageCache *_thumbnailCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _thumbnailLock;
}

@property (readonly) unsigned long long numberOfPages;
@property (retain) UIPDFPageImageCache *pageImageCache;
@property (retain) UIPDFPageImageCache *thumbnailCache;
@property (readonly) struct CGPDFDocument { } *CGDocument;
@property (nonatomic) id<NSObject, UIPDFDocumentDelegate> delegate;
@property (readonly) NSString *documentID;

+ (id)documentNamed:(id)a0;

- (id)pageAtIndex:(unsigned long long)a0;
- (double)maxWidth;
- (id)initWithCGPDFDocument:(struct CGPDFDocument { } *)a0;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (id)documentID;
- (unsigned long long)numberOfPages;
- (void)setThumbnailCache:(id)a0;
- (id)thumbnailCache;
- (double)maxHeight;
- (BOOL)allowsCopying;
- (id)pageImageCache;
- (void)setImageCacheCount:(unsigned long long)a0 lookAhead:(unsigned long long)a1 withResolution:(double)a2;
- (id)copyPageAtIndex:(unsigned long long)a0;
- (struct CGPDFDocument { } *)copyCGPDFDocument;
- (id)initWithCGPDFDocumentLimitedMemory:(struct CGPDFDocument { } *)a0;
- (void)purgePagesBefore:(unsigned long long)a0;
- (BOOL)copyDocumentTo:(id)a0;
- (void)updateWidthHeightCache;
- (double)sumWidth;
- (double)sumHeight;
- (void)setPageImageCache:(id)a0;

@end
