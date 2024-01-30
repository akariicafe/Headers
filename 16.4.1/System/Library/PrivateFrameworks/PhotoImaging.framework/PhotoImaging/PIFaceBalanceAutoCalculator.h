@class NSString;

@interface PIFaceBalanceAutoCalculator : NUAutoCalculator <NUTimeBased>

@property (readonly) long long rawState;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)calculateRAWWithRequest:(id)a0 completion:(id /* block */)a1;
+ (void)calculateWithRequest:(id)a0 completion:(id /* block */)a1;
+ (struct { double x0; double x1; double x2; })faceBalanceFromFaceImage:(id)a0 forFaceRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1;
+ (id)faceBalanceResultFromFaceObservations:(id)a0 request:(id)a1 error:(out id *)a2;
+ (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })faceRectFromNormalizedFaceRet:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forImageExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 scaleX:(double)a2 scaleY:(double)a3;

- (void)submit:(id /* block */)a0;
- (id)initWithRequest:(id)a0 isRAW:(BOOL)a1;

@end
