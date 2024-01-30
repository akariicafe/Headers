@class TSPData, TSUFlushingManager;

@interface TSDImageProvider : NSObject {
    int mLoadState;
    TSPData *mImageData;
    TSUFlushingManager *mFlushingManager;
    int mInterest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } mInterestLock;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int> > { _Atomic int __a_value; } __a_; } mRetainCount;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int> > { _Atomic int __a_value; } __a_; } mOwnerCount;
}

@property (readonly, nonatomic) unsigned long long imageGamut;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (struct CGSize { double x0; double x1; })naturalSize;
- (void)flush;
- (id)imageData;
- (unsigned long long)retainCount;
- (id)initWithImageData:(id)a0;
- (BOOL)isError;
- (id)retain;
- (int)interest;
- (void)dealloc;
- (id).cxx_construct;
- (oneway void)release;
- (BOOL)isValid;
- (void)setFlushingManager:(id)a0;
- (void)addInterest;
- (void)removeInterest;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)flushIfInterestLessThan:(int)a0;
- (struct CGSize { double x0; double x1; })dpiAdjustedNaturalSize;
- (void)i_commonInit;
- (BOOL)hasFlushableContent;
- (void)addOwner;
- (void)removeOwner;
- (void)ownerAccess;

@end
