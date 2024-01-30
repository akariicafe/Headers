@class TSPData, TSPObjectContext, TSUWeakReference;

@interface TSDImageProvider : NSObject {
    TSPData *mImageData;
    TSUWeakReference *mObjectContextReference;
    _Atomic int mRetainCount;
    _Atomic int mInterest;
}

@property (nonatomic) int i_loadState;
@property (readonly, nonatomic) BOOL i_hasFlushableContent;
@property (readonly, nonatomic) unsigned long long i_flushableMemoryEstimate;
@property (readonly, retain, nonatomic) TSPData *imageData;
@property (readonly, weak, nonatomic) TSPObjectContext *objectContext;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, nonatomic) unsigned long long imageGamut;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } dpiAdjustedNaturalSize;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isError;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)flush;
- (id)initWithImageData:(id)a0;
- (id)retain;
- (int)interest;
- (void)dealloc;
- (oneway void)release;
- (void)addInterest;
- (void)removeInterest;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)i_commonInit;
- (void)i_flushIfNoOneUsing;

@end
