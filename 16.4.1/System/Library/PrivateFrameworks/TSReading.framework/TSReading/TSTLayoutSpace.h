@class TSTLayout, TSTLayoutSpaceBundle, TSTCoordinateArray, TSTMasterLayout;

@interface TSTLayoutSpace : NSObject {
    struct { BOOL coordinates; BOOL tableOffset; } mInvalidFlags;
    struct { struct { unsigned int column; unsigned int row; } topLeft; struct { unsigned int column; unsigned int row; } bottomRight; } mGridRange;
    TSTCoordinateArray *mHeaderRowColumnCoordinates;
    TSTCoordinateArray *mBodyColumnCoordinates;
    TSTCoordinateArray *mHeaderColumnRowCoordinates;
    TSTCoordinateArray *mBodyRowCoordinates;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCachedFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCachedAlignedFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCachedStrokeFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCachedAlignedStrokeFrame;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } mLock;
}

@property (readonly, nonatomic) TSTLayoutSpaceBundle *bundle;
@property (readonly, nonatomic) int layoutSpaceType;
@property (readonly, nonatomic) TSTLayout *layout;
@property (readonly, nonatomic) TSTMasterLayout *masterLayout;
@property (readonly, nonatomic) BOOL layoutDirectionIsLeftToRight;
@property (readonly, nonatomic) BOOL isMain;
@property (readonly, nonatomic) BOOL isFrozen;
@property (readonly, nonatomic) BOOL isRepeat;
@property (readonly, nonatomic) BOOL isColumns;
@property (readonly, nonatomic) BOOL isRows;
@property (readonly, nonatomic) BOOL isCorner;
@property (nonatomic) BOOL headerColumnsRepeat;
@property (nonatomic) BOOL headerRowsRepeat;
@property (nonatomic) double viewScale;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transformToCanvas;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transformFromCanvas;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transformToDevice;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transformFromDevice;
@property (nonatomic) BOOL drawBlackAndWhite;
@property (nonatomic) BOOL drawPreventAntialias;
@property (nonatomic) struct CGPoint { double x; double y; } tableOffset;

- (int)validate:(id)a0;
- (void)unlock;
- (void)dealloc;
- (id)description;
- (id)initWithLayoutSpaceBundle:(id)a0 type:(int)a1;
- (BOOL)p_getLayoutDirectionLeftToRight;
- (void)invalidateCoordinates;
- (void)invalidateTableOffset;
- (void)lockForRead;
- (void)lockForWrite;
- (void)validateCachedFrames;
- (int)validateCoordinateCache:(id)a0;
- (int)validateTableOffset:(id)a0;

@end
