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

- (id)initWithURL:(id)a0;
- (double)maxHeight;
- (id)documentID;
- (double)maxWidth;
- (unsigned long long)numberOfPages;
- (void)dealloc;
- (id)initWithCGPDFDocument:(struct CGPDFDocument { } *)a0;
- (id)pageAtIndex:(unsigned long long)a0;
- (void)setThumbnailCache:(id)a0;
- (id)thumbnailCache;
- (BOOL)copyDocumentTo:(id)a0;
- (BOOL)allowsCopying;
- (struct CGPDFDocument { } *)copyCGPDFDocument;
- (id)copyPageAtIndex:(unsigned long long)a0;
- (id)initWithCGPDFDocumentLimitedMemory:(struct CGPDFDocument { } *)a0;
- (id)pageImageCache;
- (void)purgePagesBefore:(unsigned long long)a0;
- (void)setImageCacheCount:(unsigned long long)a0 lookAhead:(unsigned long long)a1 withResolution:(double)a2;
- (void)setPageImageCache:(id)a0;
- (double)sumHeight;
- (double)sumWidth;
- (void)updateWidthHeightCache;

@end
