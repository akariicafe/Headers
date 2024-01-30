@interface StabilizeParams : NSObject {
    struct vector<SP_FrameInfo, std::allocator<SP_FrameInfo>> { struct *__begin_; struct *__end_; struct __compressed_pair<SP_FrameInfo *, std::allocator<SP_FrameInfo>> { struct *__value_; } __end_cap_; } mFrameInfo;
    struct vector<CMTime, std::allocator<CMTime>> { struct *__begin_; struct *__end_; struct __compressed_pair<CMTime *, std::allocator<CMTime>> { struct *__value_; } __end_cap_; } mFrameTimeArray;
}

@property (readonly) unsigned int numFrames;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } roiStart;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } roiLength;
@property BOOL passThrough;
@property BOOL sparseFrames;
@property (readonly) unsigned int version;

+ (id)stabilizeParamsFromNSDictionary:(id)a0;
+ (id)stabilizeParams;
+ (id)stabilizeParamsFromURL:(id)a0;

- (BOOL)writeToURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)append:(struct { float x0[9]; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0;
- (id).cxx_construct;
- (void *)frameTimes;
- (id)infoAsDict;
- (id)initFromDict:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeForFrame:(unsigned int)a0;
- (void)getFrameInfo:(unsigned int)a0 frameInfo:(struct { float x0[9]; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1;

@end
