@class NSArray, NSMutableArray;

@interface MiroAnalysisTitleColorFinder : NSObject {
    int _height;
    int _width;
    int _heightOrg;
    int _widthOrg;
    char *_binIndexMap;
    float *_imageDataHSV;
    int _bpr;
    float _fv[36];
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } _dominantColorIndex;
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } _popupColorIndex;
    NSMutableArray *_dominantColor;
    NSMutableArray *_popupColor;
    int _startHeight;
    int _endHeight;
    int _startWidth;
    int _endWidth;
    int _photoType;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _ROI;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transformFromOrientation;
    struct CGSize { double width; double height; } _UIImageSize;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } nativeImageBounds;
@property (readonly, copy, nonatomic) NSArray *dominantColors;
@property (readonly, copy, nonatomic) NSArray *popupColors;

- (void).cxx_destruct;
- (id)init;
- (void)_commonInit;
- (void)dealloc;
- (id).cxx_construct;
- (void)setRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithUIImage:(id)a0;
- (void)buildModel:(struct CGImage { } *)a0;
- (void)analyzeUIImage:(id)a0;
- (void)analyzeCGImage:(struct CGImage { } *)a0 orientation:(long long)a1;
- (void)rgb2hsv:(float)a0 g:(float)a1 b:(float)a2 h:(float *)a3 s:(float *)a4 v:(float *)a5;
- (void)mappingROI;
- (void)findDominantPopupColor:(float *)a0;
- (void)findColorHSV;
- (void)findPeaks:(float *)a0 startIndex:(int)a1;
- (id)initWithCGImage:(struct CGImage { } *)a0 orientation:(long long)a1;

@end
